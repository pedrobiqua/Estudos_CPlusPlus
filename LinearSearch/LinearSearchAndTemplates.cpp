// LinearSearch.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.

////////////////////////////////////////////////////////////////////////////////////////////
// Studyng this book : Using the STL the C++ Standard Template Library - Robert Robson    //
// Complement: https://www.youtube.com/watch?v=mQqzP9EWu58                                //
////////////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <string>

using namespace std;

int* LinSearch(int* array, int size, int value);

template<typename T, int lenght = 10>
class MyClass
{
public:
    T array[lenght];

    void fill(T value) 
    {
        for (int i = 0; i < lenght; i++)
        {
            array[i] = value;
        }
    }

    T& at(int index) 
    {
        return array[index];
    }

private:

};


int main()
{
    /*
    cout << "Linear Search" << '\n';
    int  num = 7;
    int* ptr_lista = &num;

    int* result = LinSearch(ptr_lista, 5, 0);
    if (result)
    {
        std::cout << *result;
    }
    else
    {
        std::cout << "Resultado NULL" << '\n';
    }
    */
    MyClass<int> intArray;
    intArray.fill(1);

    for (int i = 0; i < 12; i++)
    {
        cout << "intArray[" << i << "]: " << intArray.at(i) << endl;
    }
    cout << endl;
    cout << "This result occurs because the length value was not passed, thus generating only the default value." << endl;
    cout << "Esse resultado ocorre pois não foi passado o valor do lenght, assim gerando apenas o valor default." << endl;
    cout << endl;

    MyClass<string, 12> strString;
    // Fill the array;
    strString.fill("abc");
    // Change the array in index 3;
    strString.at(3) = "12345";

    for (int i = 0; i < 12; i++)
    {
        cout << "strArray[" << i << "]: " << strString.array[i] << endl;
    }
    cout << endl;
    cout << "In this case, the length value was passed: MyClass<string, 12>" << endl;
    cout << "                                                           ^^ ";
}

int* LinSearch(int* array, int size, int value)
{
    int* endPoint;

    endPoint = array + size;
    for (; array != endPoint; array++)
    {
        if ((*array) == value ) return array;
    }
    return NULL;
}

// Nome : Pedro Bianchini de Quadros