#include <iostream>
#include <fstream>
#include <string>

using namespace std;

enum level 
{ 
    Январь = 1, 
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь
};

int main(int args, char** argv)
{
    setlocale(LC_ALL, "");
    int months;
    do
    {
        std::cout << "Введите номер месяца: " << std::endl;
        std::cin >> months;
        
        switch (months)
        {
        case(Январь):
            cout << "\aЯнварь" << endl;
            break;
        case(Февраль):
            cout << "\aФевраль" << endl;
            break;
        case(Март):
            cout << "\aМарт" << endl;
            break;
        case(Апрель):
            cout << "\aАпрель" << endl;
            break;
        case(Май):
            cout << "\aМай" << endl;
            break;
        case(Июнь):
            cout << "\aИюнь" << endl;
            break;
        case(Июль):
            cout << "\aИюль" << endl;
            break;
        case(Август):
            cout << "\aАвгуст" << endl;
            break;
        case(Сентябрь):
            cout << "\aСентябрь" << endl;
            break;
        case(Октябрь):
            cout << "\aОктябрь" << endl;
            break;
        case(Ноябрь):
            cout << "\aНоябрь" << endl;
            break;
        case(Декабрь):
            cout << "\aДекабрь" << endl;
            break;

        default: cout << "\a\a\aОшибка! В году 12 месяцев\n\n";
        }
    } while (months != 0);
}
