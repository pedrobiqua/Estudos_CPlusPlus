#include "Gato.h"
#include <iostream>
using namespace std;

Gato ::Gato(int age)
{
	_age = age;
}
int Gato::GetAge() 
{
	cout << "Idade do Cat: " << _age << "\n----------------------------" << endl;
	return _age;
}

void Gato::SetAge(int age)
{
	if (age == 1 || (age == 2))
	{
		cout << "baby cat \n";
	}
	_age = age;
}

void Gato::Meow()
{
	cout << "miauu \n";
}