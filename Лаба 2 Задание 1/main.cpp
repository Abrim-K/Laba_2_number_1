#include <iostream>
#include "money.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "RU");
	int nominal, count, tf;
	do {
		cout << "Номинал купюры: ";
		cin >> nominal;
		cout << "Количество купюр: ";
		cin >> count;
		money* ex = new money(nominal, count);
		ex->print();
		cout << "Сумма купюр: " << ex->sum() << endl;
		delete ex;
		cout << "Продолжить? (1 - да, 0 - нет): ";
		cin >> tf;
		cout << "\n";
	} while (tf != 0);
	return 0;
}