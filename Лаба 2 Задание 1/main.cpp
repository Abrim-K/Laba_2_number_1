#include <iostream>
#include "money.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "RU");
	int nominal, count, tf;
	do {
		cout << "������� ������: ";
		cin >> nominal;
		cout << "���������� �����: ";
		cin >> count;
		money* ex = new money(nominal, count);
		ex->print();
		cout << "����� �����: " << ex->sum() << endl;
		delete ex;
		cout << "����������? (1 - ��, 0 - ���): ";
		cin >> tf;
		cout << "\n";
	} while (tf != 0);
	return 0;
}