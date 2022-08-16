#include "Teste.h"
#include <iostream>

Teste::Teste() {
	num = 5;
}

int Teste::GetNum() {
	return num;
}

void Teste::SetNum(int newNum) {
	num = newNum;
}
