#include <iostream>
#include "Hash.h"

void Hash::inicializarTabela(int t[], const int TAM) {
    int i;
    for (i = 0; i < TAM; i++)
    {
        t[i] = -1;
    }
}

int Hash::funcaoHash(int chave, const int TAM) {
    return chave % TAM;
}

void Hash::inserir(int valor, int t[], const int TAM) {
    int id = funcaoHash(valor, TAM);
    while (t[id] != -1)
    {
        id = funcaoHash(id + 1, TAM);
    }
    t[id] = valor;
}

int Hash::busca(int t[], int chave, const int TAM) {
    int id = funcaoHash(chave, TAM);
    std::cout << "\t Indice gerado: " << id << '\n';
    while (t[id] != -1)
    {
        if (t[id] == chave)
        {
            return t[id];
        }
        else
        {
            id = funcaoHash(id + 1, TAM);
        }
    }
    return 0;
}

void Hash::imprimir(int t[], const int TAM) {
    int i;
    for (i = 0; i < TAM; i++)
    {
        std::cout << i << " = " << t[i] << '\n';
    }
}