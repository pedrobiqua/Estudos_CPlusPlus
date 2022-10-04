// Lista.cpp : Lista simplesmente encadeada.
//
#include <iostream>
#include "Node.h"
#include "ListaNo.h"

// Usando apenas um ponteiro
void inserirNoInicioLista(ListaNo* lista, int num);
void inserir_no_fimLista(ListaNo* lista, int num);
void inserir_no_meioLista(ListaNo* lista, int num, int ant);
void imprimir_lista(ListaNo lista);

// Usando ponteiro para ponteiro
void inserir_no_inicio(Node** lista, int num);
void inserir_no_fim(Node** lista, int num);
void inserir_no_meio(Node** lista, int num, int ant);
void imprimir_lista(Node* no);

int main()
{
    std::cout << "Lista simplesmente encadeada\n";
	int opcao, valor, anterior;

	// Exemplo abaixo usando a classe lista para organizar os nós, além de não precisar ponteiro de ponteiro
	ListaNo lista;
	do
	{
		std::cout << "\n\t0 - Sair \n\t1 - Inserir \n\t2 - Inserir no Fim \n\t3 - Inserir no meio \n\t4 - Imprimir \n";
		std::cin >> opcao;

		switch (opcao)
		{
		case 1:
			std::cout << "Digite um valor: ";
			std::cin >> valor;
			inserirNoInicioLista(&lista, valor);

			break;
		case 2:
			std::cout << "Digite um valor: ";
			std::cin >> valor;
			inserir_no_fimLista(&lista, valor);

			break;
		case 3:
			std::cout << "Digite um valor: ";
			std::cin >> valor;
			std::cout << "Digite um valor de referencia: ";
			std::cin >> anterior;
			inserir_no_meioLista(&lista, valor, anterior);

			break;
		case 4:
			imprimir_lista(lista);
			break;
		default:
			if (opcao != 0)
			{
				std::cout << "Opcao invalida! \n";
			}
			break;
		}
	} while (opcao != 0);

	//Node* lista = NULL;
	// O comentário abaixo é usando o ponteiro para ponteiro Node *no
	/*
	do
	{
		std::cout << "\n\t0 -Sair \n\t1 - Inserir \n\t2 - Inserir no Fim \n\t3 - Inserir no meio \n\t4 - Imprimir \n";
		std::cin >> opcao;

		switch (opcao)
		{
		case 1:
			std::cout << "Digite um valor: ";
			std::cin >> valor;
			inserir_no_inicio(&lista, valor);

			break;
		case 2:
			std::cout << "Digite um valor: ";
			std::cin >> valor;
			inserir_no_fim(&lista, valor);

			break;
		case 3:
			std::cout << "Digite um valor: ";
			std::cin >> valor;
			std::cout << "Digite um valor de referencia: ";
			std::cin >> anterior;
			inserir_no_meio(&lista, valor, anterior);

			break;
		case 4:
			imprimir_lista(lista);
			break;
		default:
			if (opcao != 0 )
			{
				std::cout << "Opcao invalida! \n";
			}
			break;
		}
	} while (opcao != 0);
	*/

}

void inserirNoInicioLista(ListaNo *lista, int num) {
	Node* novo = new Node();

	if (novo)
	{
		novo->valor = num;
		novo->proximo = lista->inicio;
		lista->inicio = novo;
		lista->tamanho++;
	}
	else
	{
		std::cout << "Nao foi possivel alocar memoria" << '\n';
	}
}

void inserir_no_inicio(Node** lista, int num) {
	Node* novo = new Node();

	if (novo)
	{
		novo->valor = num;
		novo->proximo = *lista;
		*lista = novo;
	}
	else
	{
		std::cout << "Nao foi possivel alocar memoria" << '\n';
	}
}

void inserir_no_fimLista(ListaNo* lista, int num) {
	Node* aux, * novo = new Node();
	if (novo)
	{
		novo->valor = num;
		novo->proximo = NULL;

		// É o primeiro?
		if (lista == NULL)
		{
			lista->inicio = novo;
		}
		else
		{
			aux = lista->inicio;
			while (aux->proximo)
			{
				aux = aux->proximo;
			}
			aux->proximo = novo;
		}
		lista->tamanho++;
	}
	else
	{
		std::cout << "Nao foi possivel alocar memoria" << '\n';
	}
}

void inserir_no_fim(Node** lista, int num) {
	Node* aux, * novo = new Node();
	if (novo)
	{
		novo->valor = num;
		novo->proximo = NULL;

		// É o primeiro?
		if (*lista == NULL)
		{
			*lista = novo;
		}
		else
		{
			aux = *lista;
			while (aux->proximo)
			{
				aux = aux->proximo;
			}
			aux->proximo = novo;
		}
	}
	else
	{
		std::cout << "Nao foi possivel alocar memoria" << '\n';
	}
}

void inserir_no_meioLista(ListaNo* lista, int num, int ant) {
	Node* aux, * novo = new Node();
	if (novo)
	{
		novo->valor = num;
		// É o primeiro ?
		if (lista->inicio == NULL)
		{
			novo->proximo = NULL;
			lista->inicio = novo;
		}
		else
		{
			aux = lista->inicio;
			while (aux->valor != ant && aux->proximo)
			{
				aux = aux->proximo;
			}
			novo->proximo = aux->proximo;
			aux->proximo = novo;
		}
		lista->tamanho++;
	}
	else
	{
		std::cout << "Nao foi possivel alocar memoria" << '\n';
	}
}

void inserir_no_meio(Node** lista, int num, int ant) {
	Node* aux, * novo = new Node();
	if (novo)
	{
		novo->valor = num;
		// É o primeiro ?
		if (*lista == NULL)
		{
			novo->proximo = NULL;
			*lista = novo;
		}
		else
		{
			aux = *lista;
			while (aux->valor != ant && aux->proximo)
			{
				aux = aux->proximo;
			}
			novo->proximo = aux->proximo;
			aux->proximo = novo;
		}
	}
	else
	{
		std::cout << "Nao foi possivel alocar memoria" << '\n';
	}
}

void imprimir_lista(Node* no) {

	std::cout << "\n\t Lista:";

	while (no)
	{
		std::cout << no->valor << ' ';
		no = no->proximo;
	}
	std::cout << "\n\n";
}

void imprimir_lista(ListaNo lista) {
	Node* no = lista.inicio;
	std::cout << "\n\t Lista:";

	while (no)
	{
		std::cout << no->valor << ' ';
		no = no->proximo;
	}
	std::cout << "\n\t Tamanho da lista: " << lista.tamanho;
	std::cout << "\n\n";
}
