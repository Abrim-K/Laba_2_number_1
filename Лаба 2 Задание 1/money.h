#include <iostream>

class money {
public:
	int banknote_nominal;
	int banknote_count;
	money(int nominal, int count)
	{
		banknote_nominal = nominal;
		banknote_count = count;
	}
	void print()
	{
		std::cout << "������� ������: " << banknote_nominal
			<< "\t���������� �����: " << banknote_count << std::endl;
	}
	int sum()
	{
		return banknote_nominal * banknote_count;
	}
};