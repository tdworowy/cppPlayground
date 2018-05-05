#include <iostream>
#include "namesp.h"

void other();
void another();

int main() {
	using debts::Debt;
	using debts::showDebt;

	Debt golf = { {"Jack","Ripper"},120.9 };
	showDebt(golf);
	other();
	another();
}
void other(){
	using std::cout;
	using std::endl;
	using namespace debts;
	Person aw = { "Aram", "Warlock" };
	showPerson(aw);
	Debt zippy[3];
	int i;
	for (i = 0; i < 3; i++) {
		getDebt(zippy[i]);
	}
	for (i = 0; i < 3; i++) {
		showDebt(zippy[i]);
	}
	cout << "Ammount sum: " << sumDebts(zippy, 3) << " $" << endl;
}

void another() {
	using pers::Person;
	Person collector = { "Rick","Sanchez" };
	pers::showPerson(collector);

}