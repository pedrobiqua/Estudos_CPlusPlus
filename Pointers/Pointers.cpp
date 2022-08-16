// Estudo de ponteiros
#include <iostream>

// Metodos usados para o exemplo
void ShowResults(int* a, int* b);
void ShowBeforeOrAfterResult(int* a, int* b);
void SwapNumber(int* a, int* b);

int main()
{
    std::cout << "Estudo de Ponteiros\n";
    //Demonstração do uso de ponteiros
    int num = 8;
    int number = 2;
    int* a = &num;
    int* b = &number;

    ShowResults(a, b);
}

void ShowResults(int *a, int *b) {
    std::cout << "Before\n";
    ShowBeforeOrAfterResult(a, b);
    SwapNumber(a, b);
    std::cout << "After\n";
    ShowBeforeOrAfterResult(a, b);

    std::cout << "Before\n";
    ShowBeforeOrAfterResult(a, b);
    SwapNumber(a, b);
    std::cout << "After\n";
    ShowBeforeOrAfterResult(a, b);
}

void ShowBeforeOrAfterResult(int*a, int *b) {
    
    std::cout << "[A]: " << *a << '\n';
    std::cout << "[B]: " << *b << '\n' << '\n';
    
}

void SwapNumber(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//Usando ponteiros somente na função e demonstrando que foi mudado no num e number
/*
//Cria a instacia do num e number
int num;
int number;
num = 5;
number = 9;

std::cout << "Before\n";
ShowBeforeOrAfterResult(&num, &number);
SwapNumber(&num, &number);
std::cout << "After\n";
ShowBeforeOrAfterResult(&num, &number);
*/

