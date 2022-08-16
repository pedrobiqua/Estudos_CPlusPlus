#pragma once
class Gato
{
public:
	Gato(int age);
	float peso;
	void Meow ();
	void SetAge(int age);
	int GetAge();
	~Gato();
private:
	int _age;
};

