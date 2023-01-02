#include <iostream>

#define MODE 2
#if !defined MODE
#error "сообщение о необходимости определить MODE"
#endif // !MODE

#ifdef MODE
#if MODE == 2

int add(int num1, int num2)
{
    return (num1 + num2);
}

#endif
#endif


int main()
{
    setlocale(LC_ALL, "Russian"); 

#ifdef MODE

#if MODE == 1
    std::cout << std::endl << "Работаю в режиме тренировки" << std::endl;

#elif MODE == 2
    std::cout << std::endl << "Работаю в боевом режиме" << std::endl;
    int num1 = 0;
    int num2 = 0;

    std::cout << "Введите число 1: ";

    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;
    
    std::cout << std::endl << "Результат сложения: " << add(num1, num2) << std::endl;
#else MODE
    std::cout << std::endl << "Неизвестный режим.Завершение работы" << std::endl;
#endif 
#endif

#ifndef MODE
    std::cout << std::endl << "Не включен #error и не определён #define MODE." << std::endl;
#endif
}