#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct geolocation
{
    std::string City;
    std::string Street;
    int House_number;
    int Apartment_number;
    int Index;
};

void print_struct(geolocation g)
{
    std::cout << "Город: " << g.Apartment_number << "\nУлица: " << g.Street << "\nНомер дома: "
        << g.House_number << "\nНомер квартиры: " << g.Apartment_number << "\nИндекс: " << g.Index;
}

int main(int args, char** argv)
{
    setlocale(LC_ALL, "");

    geolocation g_1 = {"Москва","Арбат",12,8,123456 };
    geolocation g_2 = { "Ижевск","Пушкина",59,143,953769 };

    print_struct(g_1);
    std::cout << "\n\n";
    print_struct(g_2);
}

