#pragma once
class Hash
{
public:
	void static inicializarTabela(int tabela[], const int TAM);
	int static funcaoHash(int chave, const int TAM);
	void static inserir(int valor, int tabela[], const int TAM);
	int static busca(int tabela[], int chave, const int TAM);
	void static imprimir(int tabela[], const int TAM);
};

