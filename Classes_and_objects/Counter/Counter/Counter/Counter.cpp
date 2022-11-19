#include <iostream>
#include <string>
using namespace std;


class Counter
{
protected:
    int value = 1;

public:
    void set(int initial_value)
    {
        if (initial_value > 0)
        {
            value = initial_value;
        }
    }
    void add()
    {
        ++value;
    }
    void reduce()
    {
        --value;
    }
    int get()
    {
        return value;
    }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "rus");
    Counter objCounter{};

    string choice;
    bool exit = false;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите y или n: ";
    std::cin >> choice;

    if (choice == "y")
    {
        std::cout << endl;
        int initial_value = 0;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initial_value;
        objCounter.set(initial_value);
        std::cout << endl;
    }
    do
    {
        std::cout << "Введите команду('+', '-', '=' или 'x') :  ";
        std::cin >> choice;
        std::cout << endl;
        if (choice == "+")
        {
            objCounter.add();
        }
        if (choice == "-")
        {
            objCounter.reduce();
        }
        if (choice == "=")
        {
            std::cout << objCounter.get();
            std::cout << "\n\n";
        }
        if (choice == "x" || choice == "х")
        {
            std::cout << "До свидания!";
            exit = true;
        }        
    } 
    while (exit == false);
}


