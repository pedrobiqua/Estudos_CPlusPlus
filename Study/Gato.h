#pragma once
class Gato
{
public:
	Gato(int age);
	float peso;
	void Meow ();
	void SetAge(int age);
	int GetAge();
private:
	int _age;
};

