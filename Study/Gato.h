#pragma once
class Gato
{
public:
	Gato(int age);
	void Meow ();
	void SetAge(int age);
	int GetAge();
private:
	int _age;
};

