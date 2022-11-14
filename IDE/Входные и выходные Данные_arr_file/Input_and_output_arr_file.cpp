#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void print(int* arr, int size) //вывод массива на экран
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int* create_array(int size)//создание динамического массива
{
    return new int[size]();
}

int main(int args, char** argv)
{
    setlocale(LC_ALL, "Russian");

    int N = 0;
    int M = 0;
    int i = 0;
    int temp = 0;
    

    std::ifstream file_in("in.txt");
    if (!file_in.is_open())
    {
        std::cout << "Не получилось открыть файл in.txt" << std::endl;
        return 1;
    }
    
        file_in >> N;

        int* arr = create_array(N);
        for (i = 0; i < N && file_in; ++i)
        {
            file_in >> arr[i];
        }

        file_in >> M;

        int* arr_2 = create_array(M);
        for (i = 0; i < M && file_in; ++i)
        {
            file_in >> arr_2[i];
        }

        std::cout << "Первый массив: \n";
        print(arr, N);

        std::cout << "Второй массив: \n";
        print(arr_2, M);

        //Сдвиг первого массива влево 
        temp = arr[0];
        for (i = 0; i < N-1; ++i)
        {
            arr[i] = arr[i + 1];
        }
        arr[N - 1] = temp;

        //сдвиг правого массива вправо
        temp = arr_2[M - 1];
        for (i = M - 1; i >=1; i--)
        
            arr_2[i] = arr_2[i - 1];
        }
        arr_2[0] = temp;

        
        //запись в файл
        std::ofstream file_out("out.txt");
        if (!file_out.is_open())
        {
            std::cout << "Не получилось открыть файл out.txt" << std::endl;
            return 1;
        }
        else
        {
            file_out << M << std::endl;        //запись второго массива в файл 
            for (int i = 0; i < M; i++)
            {
                file_out << arr_2[i] << " "; 
            }
            file_out << std::endl;

            file_out << N << std::endl;         //запись первого массива в файл 
            for (int i = 0; i < N; i++)
            {
                file_out << arr[i] << " "; 
            }
            file_out << std::endl;

            std::cout << "Успешно записали в файл out.txt" << std::endl;
        }

        delete[] arr;
        delete[] arr_2;
        file_in.close();
        file_out.close();
}
