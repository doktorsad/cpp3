#include <iostream>
#include <string>

class Counter {
private:
    int count;
public:
    Counter(int count) : count(count) {}
    void add_count() { count += 1; }
    void sub_count() { count -= 1; }
    int get_count() { return count; }
};

void lead_the_team(Counter& count) {
    std::cout << "Enter the command ('+', '-', '=' or 'x'): ";
    char choise;
    std::cin >> choise;
    switch (choise) {
    case '+': count.add_count(); break;
    case '-': count.sub_count(); break;
    case '=': std::cout << count.get_count() << '\n'; break;
    case 'x': std::cout << "Goodbay"; exit(0);
    default: std::cout << "Erroneous input"; exit(0);
    }
}

int entering_selection() {
    int var = 0;
    std::cout << "Do you want to specify the initial value of the counter? Enter yes or no: ";
    std::string yes_no;
    getline(std::cin, yes_no);
    if (yes_no == "no") { var = 1; return var; }
    else if (yes_no == "yes") {
        std::cout << "Enter the initial value of the counter: ";
        int num;
        std::cin >> num;
        var = num;
        return var;
    }
    else { std::cout << "Erroneous input\n"; exit(0); }
}

int main() {
    Counter count{ entering_selection() };
    while (true) {
        lead_the_team(count);
    }
    return 0;
}