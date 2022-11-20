#include <iostream>

class Calculator
{
private:
    double num1;
    double num2;
public:
    double add()
    {
        return num1 + num2;
    }
    double multiply()
    {
        return num1 * num2;
    }
    double subtract_1_2()
    {
        return num1 - num2;
    }
    double subtract_2_1()
    {
        return num2 - num1;
    }
    double divide_1_2()
    {
        
        return num1 / num2;
    }
    double divide_2_1()
    {
        
        return  num2 / num1;
    }
    bool set_num1(double num1)
    {
        if (num1 != 0)
        {
            this->num1 = num1;
            return(1);
        }
        else
        {
            std::cout << "Неверный ввод!\n";
            return(0);
        }
    }
    bool set_num2(double num2)
    {
        if (num2 != 0)
        {
            this->num2 = num2;
            return(1);
        }
        else
        {
            std::cout << "Неверный ввод!\n";
            return(0);
        }
    }
};

int main()
{
    setlocale(LC_ALL, "rus"); // установка локали
    Calculator objCalculator{};

    bool set_num = false;
    double num1 = 0;
    double num2 = 0;

    do
    {
        do
        {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            set_num = objCalculator.set_num1(num1);
        } while (set_num == false);
        set_num = false;
        do
        {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            set_num = objCalculator.set_num2(num2);
        } while (set_num == false);
        set_num = false;

        std::cout << "num1 + num2 = " <<   objCalculator.add() << std::endl;
        std::cout << "num1 * num2 = " <<   objCalculator.multiply()  << std::endl;
        std::cout << "num1 - num2 = " <<   objCalculator.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " <<   objCalculator.subtract_2_1() << std::endl;
        std::cout << "num1 / num2 = " <<   objCalculator.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " <<   objCalculator.divide_2_1() << std::endl;
    } 
    while (set_num == false);
}


