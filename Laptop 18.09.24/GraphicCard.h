#pragma once
class GraphicCard
{
	char* name;
	int capacity;
	double price;
public:
	GraphicCard(const char* n, int c, double pr);
	~GraphicCard();
	char* GetName() const;
	int GetCapacity() const;
	double GetPrice() const;
};

