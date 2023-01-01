#include <iostream>
#include <fstream>
#include <string>
#include "math_power.h"

using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "");

    int a = 0;
    int b = 0;
    int chose = 0 ;
    int equally = 0;

    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    
    
    std::cout << "\nВыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> chose;
    if (chose == 1)
    {
        std::cout << " \n " << a << " сложить с " << b << " = "  << addition(a, b);
    }
    else if (chose == 2)
    {
        std::cout << " \n " << a << " вычисть " << b << " = " << subtraction(a, b);
    }
    else if (chose == 3)
    {
        std::cout << " \n " << a << " умножить на " << b << " = " << multiplication(a, b);
    }
    else if (chose == 4)
    {
        std::cout << " \n " << a << " поделить на  "<< b << " = "<< division(a, b);
    }
    else if (chose == 5)
    {
        std::cout << " \n " << a << " в степени " << b << " = " << exponentiation(a, b);
    }
    else 
    {
        std::cout << "Пункта", chose, " не существует";
    }
}
