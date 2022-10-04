// LinearSearch.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Studyng this book : Using the STL the C++ Standard Template Library - Robert Robson

#include <iostream>
using namespace std;

int* LinSearch(int* array, int size, int value);

int main()
{
    cout << "Linear Search" << '\n';
    int  num = 7;
    int* ptr_lista = &num;
    LinSearch(ptr_lista, 5, 7);
   

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