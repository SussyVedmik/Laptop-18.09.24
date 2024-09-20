#include "GraphicCard.h"
#include <string.h>
#include <iostream>
using namespace std;

GraphicCard::GraphicCard(const char* n, int c, double pr)
	: capacity(c), price(pr)
{
	name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}

GraphicCard::~GraphicCard()
{
	delete[]name;
}

char* GraphicCard::GetName() const
{
	return name;
}

int GraphicCard::GetCapacity() const
{
	return capacity;
}

double GraphicCard::GetPrice() const
{
	return price;
}
