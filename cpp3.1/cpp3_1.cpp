#include <iostream>

class Calculator{
private:
    double num1;
    double num2;

public:
    double add(){return num1 + num2;}
    double multiply(){return num1 * num2;}
    double subtract_1_2(){return num2 - num1;}
    double subtract_2_1(){return num1 - num2;}
    double divade_1_2(){return num1 / num2;}
    double divade_2_1(){return num2 / num1;}
    bool set_num1(double num1){
        if(num1 == 0){return false;}
        else {
            this->num1 = num1;
            return true;
        }
    }
    bool set_num2(double num2){
        if(num2 == 0){return false;}
        else{
            this->num2 = num2;
            return true;
        }
    }
};

double enter_in_data(const std::string &str_num){
    double num;
    std::cout << "Enter " << str_num<<": ";
    std::cin >> num;
    return num;
}

void print_cal(Calculator &cal){
    std::cout << "num1 + num2 = " << cal.add() <<
    "\nnum1 - num2 = " << cal.subtract_2_1() <<
    "\nnum2 - num1 = " << cal.subtract_1_2() <<
    "\nnum1 * num2 = " << cal.multiply() <<
    "\nnum1 / num2 = " << cal.divade_1_2() <<
    "\nnum2 / num2 = " << cal.divade_2_1() << '\n';
}

int main(){
    std::string str_num_first = "num1";
    std::string str_num_second = "num2";
    while(true){
        Calculator cal;
        while(true){
            if(cal.set_num1(enter_in_data(str_num_first)) == false){
                std::cout << "Input error\n";
                continue;
            }
            else{break;}
        }
        while(true){
            if(cal.set_num2(enter_in_data(str_num_second)) == false){
                std::cout << "Input error\n";
                continue;
            }
            else {break;}
        }
        print_cal(cal);
    }
    return 0;
}