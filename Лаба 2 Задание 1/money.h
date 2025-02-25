#include <iostream>

class money {
	int banknote_nominal;
	int banknote_count;
public:
	money(int nominal, int count)
	{
		banknote_nominal = nominal;
		banknote_count = count;
	}
	void print()
	{
		std::cout << "Íîìèíàë êóïþðû: " << banknote_nominal
			<< "\tÊîëè÷åñòâî êóïþð: " << banknote_count << std::endl;
	}
	int sum()
	{
		return banknote_nominal * banknote_count;
	}
};
