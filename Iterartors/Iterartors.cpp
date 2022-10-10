// Iterartors.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
// Pedro Bianchini de Quadros

////////////////////////////////////////////////////////////////////////////////////////////
// Studyng this book : Using the STL the C++ Standard Template Library - Robert Robson    //
////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
int mystrlen(char* str);
void reverse(char* str);

int main()
{
    std::cout << "Studyng this book : Using the STL the C++ Standard Template Library - Robert Robson\n";
    std::cout << "Pedro Bianchini de Quadros\n";

    char message[32];
    strcpy(message, "Studying iterators");

    for (int i = 0; i < strlen(message); i++)
    {
        std::cout << message[i];
    }
    std::cout << std::endl;
    std::cout << mystrlen(message);

    reverse(message);

    for (int i = 0; i < strlen(message); i++)
    {
        std::cout << message[i];
    }

}

int mystrlen(char* str) 
{
    int len = 0;
    while ((*str++) != 0)
    {
        len++;
    }
        
    return len;
}

void reverse(char* str)
{
    char* endPt;
    int len;
    char temp;

    len = mystrlen(str);
    if (len < 2)
    {
        return;
    }

    endPt = str + len - 1;
    // ponteiro + (tamanho - 1) -> essa é a parte final do ponteiro.
    //     0    +   12 - 1

    while (str < endPt)
    {
        temp = *str;
        *str = *endPt;
        *endPt = temp;
        str++;
        endPt--;
    }
}
