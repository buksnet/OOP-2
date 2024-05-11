#include "Wage.h"

Wage::Wage() {
		this->name = "NOT DEFINED";
		this->wage = 0.0;
		this->prize_percent = 0;
	}
Wage::Wage(std::string name, double wage, int prize_percent) {
		this->name = name;
		this->wage = wage;
		this->prize_percent = prize_percent;
	}
Wage::Wage(Wage& T) {
		this->name = T.name;
		this->wage = T.wage;
		this->prize_percent = T.prize_percent;
	}
Wage::~Wage() {
	std::cout << std::endl << this->name << " was fired... :(" << std::endl;
	}

std::string Wage::getName() {
	return this->name;
}

double Wage::getWage() {
	return this->wage;
}

int Wage::getPrize() {
	return this->prize_percent;
}

void Wage::setName(std::string name) {
	this->name = name;
}

void Wage::setWage(double wage) {
	this->wage = wage;
}

void Wage::setPrize(int prize) {
	this->prize_percent = prize;
}