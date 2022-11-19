#include <iostream>

class Calculator
{
public:
    double num1;
    double num2;

    double add()
    {
        std::cout << "num1 + num2 = " << num1 + num2 << std::endl;
        return 0;
    }
    double multiply()
    {
        std::cout << "num1 * num2 = " << num1 * num2 << std::endl;
        return 0;
    }
    double subtract_1_2()
    {
        std::cout << "num1 - num2 = " << num1 - num2 << std::endl;
        return 0;
    }
    double subtract_2_1()
    {
        std::cout << "num2 - num1 = " << num2 - num1 << std::endl;
        return 0;
    }
    double divide_1_2()
    {
        std::cout << "num1 / num2 = " << num1 / num2 << std::endl;
        return 0;
    }
    double divide_2_1()
    {
        std::cout << "num2 / num1 = " << num2 / num1 << std::endl;
        return 0;
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
        objCalculator.add();
        objCalculator.multiply();
        objCalculator.subtract_1_2();
        objCalculator.subtract_2_1();
        objCalculator.divide_1_2();
        objCalculator.divide_2_1();
    } while (set_num == false);
}


