#include "Pessoa.h"

using namespace std;

class Pessoa
{
public:
	Pessoa();
		char Nome[20];
		char Cpf[12];
		int idade;
	~Pessoa();

private:

};

Pessoa::Pessoa()
{
}

Pessoa::~Pessoa()
{
}
