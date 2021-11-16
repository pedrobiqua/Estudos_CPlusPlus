// Study.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include "Gato.h"

using namespace std;

int doubler(int = 90); //referenciar a função

int main()
{
    Gato gato(12); //usando construtor
    cout << gato.GetAge(); //usando get

    /*int result = 0, input;
    cout << "Enter a number between 0 and 10000 to double: ";
    cin >> input;

    cout << "\nBefore doubler is called . . . ";
    cout << "\nInput:" << input << " doubled: " << result << "\n";
    
    result = doubler(input);

    cout << "\nBack from doubler . . . ";
    cout << "\nInput:" << input << " doubled: " << result << "\n";
    cout << "--------------------------\n";*/
    return 0;
}

int doubler(int original) {

    if (original <= 1000)
        return original * 2;
    else
        return -1;

    //Essa linha nunca irá ser executado cout << "You can't get here";
}