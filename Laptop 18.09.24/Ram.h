#pragma once
class Ram
{
	char* name;
	int size;
	double price;
public:
	Ram(const char* n, int s, double pr);
	~Ram();
	char* GetName() const;
	int GetSize() const;
	double GetPrice() const;
};

