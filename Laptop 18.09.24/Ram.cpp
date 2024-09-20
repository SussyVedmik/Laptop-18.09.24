#include "Ram.h"
#include <string.h>
#include <iostream>
using namespace std;

Ram::Ram(const char* n, int s, double pr)
	: size(s), price(pr)
{
	name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}

Ram::~Ram()
{
	delete[]name;
}

char* Ram::GetName() const
{
	return name;
}

int Ram::GetSize() const
{
	return size;
}

double Ram::GetPrice() const
{
	return price;
}
