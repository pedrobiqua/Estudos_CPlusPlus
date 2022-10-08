// LinearSearch.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Studyng this book : Using the STL the C++ Standard Template Library - Robert Robson

#include <iostream>
using namespace std;

int* LinSearch(int* array, int size, int value);

//Generic Linear Search Using a Template
/*
template <class T>
T* LinearSearch(T* teste, int size, T& value) {
    T* endPoint;

    endPoint = teste + size;
    for (; teste != endPoint; teste++)
    {
        if ((*teste) == value)
        {
            return teste;
        }
    }

    return NULL;
}
*/


int main()
{
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