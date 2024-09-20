#pragma once
class CPU
{
	char* name;
	int cores;
	double price;
public:
	CPU(const char* n, int c, double pr);
	~CPU();
	char* GetName() const;
	int GetCores() const;
	double GetPrice() const;
};

