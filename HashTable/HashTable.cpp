// HashTable.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include "Hash.h"

int main()
{
    const int TAM = 31;
    int opcao, valor, retorno, tabela[TAM];

    Hash::inicializarTabela(tabela, TAM);
    do
    {
        std::cout << "\n\t0 -Sair\n\t1 -Inserir\n\t2 -Buscar\n\t3 -Imprimir\n";
        std::cin >> opcao;
        std::cout << '\n';

        switch (opcao)
        {
        case 1:
            std::cout << "\t Qual valor deseja inserir ?" << '\n';
            std::cin >> valor;
            
            Hash::inserir(valor, tabela, TAM);

            break;
        case 2:

            std::cout << "\t Qual valor deseja buscar ?" << '\n';
            std::cin >> valor;
            retorno = Hash::busca(tabela, valor, TAM);
            if (retorno != 0)
            {
                std::cout << "\t Valor encontrado: " << retorno << '\n';
            }
            else
            {
                std::cout << "\t O valor não foi encontrado! " << '\n';
            }

            break;
        case 3:
            Hash::imprimir(tabela, TAM);
            break;
        default:
            std::cout << "Opcao invalida" << '\n';
        }
    } while (opcao != 0);

    return 0;
}
