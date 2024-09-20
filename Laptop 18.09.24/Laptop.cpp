#include "Laptop.h"
#include <string.h>
#include <iostream>
using namespace std;

Laptop::Laptop(const char* n, const char* c, double pr, const CPU* cp, const SDD* sd, const Ram* ra, const GraphicCard* gr)
	: price(pr), cpu(*cp), sdd(*sd), ram(*ra), graph(*gr)
{
	name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);

	color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);

	count++;
}

Laptop::~Laptop()
{
	delete[] name;
	delete[] color;
	--count;
}

//void Laptop::Print()
//{
//	cout << "Model: " << name << endl;
//	cout << "Color: " << color << endl;
//	cout << "Price: " << price << endl;
//	cout << "CPU: " << cpu << endl;
//	cout << "SDD: " << sdd << endl;
//	cout << "RAM: " << ram << endl;
//	cout << "GraphicCard: " << graph << endl;
//}

char* Laptop::GetName() const
{
	return name;
}

char* Laptop::GetColor() const
{
	return color;
}

double Laptop::GetPrice() const
{
	return price;
}

int Laptop::GetCount()
{
	return count;
}
