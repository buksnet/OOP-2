#include <iostream>
#include "Wage.h"
using namespace std;



int main() {
	Wage pay1;
	Wage pay2("Vladimir", 54234.15, 30);
	Wage pay3 = pay1;
	pay1.setName("Gennadiy");
	pay1.setWage(25496.50);
	pay1.setPrize(50);

	cout << "First worker - name: " << pay1.getName() << " wage:" << pay1.getWage() << " prize: " << pay1.getPrize() << endl;
	cout << "Second worker - name: " << pay2.getName() << " wage:" << pay2.getWage() << " prize: " << pay2.getPrize() << endl;
	return 0;
}