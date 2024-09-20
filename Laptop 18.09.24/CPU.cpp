#include "CPU.h"
#include <string.h>
#include <iostream>
using namespace std;

CPU::CPU(const char* n, int c, double pr)
	: cores(c), price(pr) 
{
	name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}

CPU::~CPU()
{
	delete[]name;
}

char* CPU::GetName() const
{
	return name;
}

int CPU::GetCores() const
{
	return cores;
}

double CPU::GetPrice() const
{
	return price;
}
