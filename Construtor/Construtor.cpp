#include <iostream>
#include "Teste.h"

int main()
{
    std::cout << R"(TESTANDO O CONSTRUTOR DO CPP)" << '\n';

    std::cout << "Copiando construtor" << '\n';

    //Tipos de instancia
    //Tipo 1:
    Teste ct;

    //Tipo 2: Cria 2 obj
    Teste *ct2;
    ct2 = new Teste[2]();

    //Tipo 3:
    //Teste ct5();

    //Tipo 4:
    Teste *ct6;
    ct6 = new Teste();

    //Tipo 5: Cria 4 obj
    Teste ct7[4];
    
    
    ct.SetNum(2);
    ct2->SetNum(3);
    
    std::cout << "CT: " << ct.GetNum() << '\n';
    std::cout << "CT2: " << ct2->GetNum() << '\n';
    std::cout << "CT2-0: " << ct2[0].GetNum() << '\n';
    std::cout << "CT2-1: " << ct2[1].GetNum() << '\n';

    //Copia
    Teste ct3 = ct;
    std::cout << "CT3 - COPIA DO CT: " << ct3.GetNum() << '\n';

    //Copia
    Teste* ct4 = ct2;
    std::cout << "CT4 - COPIA DO CT2: " << ct4->GetNum() << '\n';


    //std::cout << "CT5 - COPIA DO CT5: " << ct5().GetNum() << '\n';

    std::cout << "CT6: " << ct6->GetNum() << '\n';

    std::cout << "CT7: " << ct7->GetNum() << '\n';
    
    ct7->SetNum(8);//Só muda o primeiro vetor
    std::cout << "CT7-0: " << ct7[0].GetNum() << '\n';
    std::cout << "CT7-1: " << ct7[1].GetNum() << '\n';
    ct7[2].SetNum(7);
    std::cout << "CT7-2: " << ct7[2].GetNum() << '\n';
    ct7[3].SetNum(10);
    std::cout << "CT7-3: " << ct7[3].GetNum() << '\n';
    

}
