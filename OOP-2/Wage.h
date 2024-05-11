#pragma once
#include <iostream>

class Wage {
private:
	std::string name;
	double wage;
	int prize_percent;
public:
	Wage();
	Wage(std::string name, double wage, int prize_percent);
	Wage(Wage& T);
	~Wage();

	std::string getName();

	double getWage();

	int getPrize();

	void setName(std::string name);

	void setWage(double wage);

	void setPrize(int prize);
};