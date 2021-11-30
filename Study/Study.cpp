// Study.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include "Gato.h"
#include "Rectangle.h"

using namespace std;

int doubler(int = 90); //referenciar a função

int main()
{
    //cout << "Pedrooo" << endl;
    //Gato gato(12); //usando construtor
    //cout << gato.GetAge(); //usando get


    /*int result = 0, input;
    cout << "Enter a number between 0 and 10000 to double: ";
    cin >> input;

    cout << "\nBefore doubler is called . . . ";
    cout << "\nInput:" << input << " doubled: " << result << "\n";
    
    result = doubler(input);

    cout << "\nBack from doubler . . . ";
    cout << "\nInput:" << input << " doubled: " << result << "\n";
    cout << "--------------------------\n";*/

    //Primeiro incializar o retangulo
    Rectangle MyRectangle(100, 20, 50, 80);

    pedro: int Area = MyRectangle.GetArea();

    cout << "Rectangle Area: " << Area << "\n";
    cout << "Upper Left X Coordinate: ";
    cout << MyRectangle.GetUpperLeft().GetX() << "\n";
    cout << "Upper Left Y Coordinate: ";
    cout << MyRectangle.GetUpperLeft().GetY() << "\n";
    cout << "Upper Right X Coordinate: ";
    cout << MyRectangle.GetUpperRight().GetX() << "\n";
    cout << "Upper Right Y Coordinate: ";
    cout << MyRectangle.GetUpperRight().GetY() << "\n";

    return 0;
}

int doubler(int original) {

    if (original <= 1000)
        return original * 2;
    else
        return -1;

    //Essa linha nunca irá ser executado cout << "You can't get here";
}