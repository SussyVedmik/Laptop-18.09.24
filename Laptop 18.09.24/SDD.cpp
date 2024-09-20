#include "SDD.h"
#include <string.h>
#include <iostream>
using namespace std;

SDD::SDD(const char* n, int c, double pr)
	: capacity(c), price(pr)
{
	name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}

SDD::~SDD()
{
	delete[]name;
}

char* SDD::GetName() const
{
	return name;
}

int SDD::GetCapacity() const
{
	return capacity;
}

double SDD::GetPrice() const
{
	return price;
}
