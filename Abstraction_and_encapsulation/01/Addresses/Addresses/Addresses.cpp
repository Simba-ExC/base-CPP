#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class address{

private:
    std::string city;
    std::string street;
    int house;
    int flat;
    std::string refund;
public:
    address(std::string city, std::string street, int house, int flat)
    {
        this->city = city;
        this->street = street;
        this->house = house;
        this->flat = flat;
    }
    std::string get_output_address ()
    {
        refund = (city + ", " + street + ", " + to_string(house) + ", " + to_string(flat));
        return refund;
    }
};

std::string* create_array(int size)
{
    return new std::string[size]();
}

int main()
{
    std::string city;
    std::string street;
    int house;
    int flat;
    int size;
    std::string Q;

    setlocale(LC_ALL, "");

    std::ifstream file("in.txt");

    if (!file.is_open())
    {
        std::cout << "Не получилось открыть файл in.txt" << std::endl;
        return 1;
    }
    else
    {
        file >> size;

        std::string* addr = create_array(size);

        for (int i = 0; i < size && file; ++i)
        {
            file >> city;
            file >> street;
            file >> house;
            file >> flat;

            address Address1 = address(city, street, house, flat);
            addr[i] = Address1.get_output_address();
        }
        file.close();
        std::ofstream file("out.txt");
        if (!file.is_open())
        {
            std::cout << "Не получилось открыть файл out.txt" << std::endl;
            return 1;
        }
        else
        {
            file << size << std::endl;
            for (int i = 0; i < size; i++)
            {
                file << addr[i] << std::endl;
            }
            std::cout << "Успешно записали в файл out.txt" << std::endl;
        }
        delete[] addr;
        file.close();
    }
}


