#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct owner
{ 
    std::string account_number;
    std::string owner_name; 
    int balance;
};

int main(int args, char** argv)
{
    setlocale(LC_ALL, "");
  
    owner o;

    std::cout << "Введите номер счёта: " << std::endl;
    std::cin >> o.account_number;
    std::cout << "Введите имя владельца: " << std::endl;
    std::cin >> o.owner_name;
    std::cout << "Введите баланс: " << std::endl;
    std::cin >> o.balance;
 
    owner* o_owner = &o;

    std::cout << "Введите новый баланс: " << std::endl;
    std::cin >> o_owner->balance;

    std::cout << o.account_number << " " << o.owner_name << " " << o.balance;
}

