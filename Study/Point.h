#pragma once
#include <iostream>
class Point
{ //Criação do arquivo de cabeçalho <Header>
public:
	//sem construtor
	void SetX(int x) { itsX = x; }
	void SetY(int y) { itsY = y; }
	int GetX() const { return itsX; }
	int GetY() const { return itsY; }

private:
	int itsX;
	int itsY;
};

