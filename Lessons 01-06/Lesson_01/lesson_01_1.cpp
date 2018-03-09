//перевод mm -> sm

//#include "stdafx.h"
#include <iostream>



//int _tmain(int argc, _TCHAR* aggv[])
int main()
{
	int  mm;
	double cm;
	std::cout << "Vashe chislo ser: \n";
	std::cin >> mm;
	cm = (double)mm / 10;
	std::cout << cm << " cm=" << mm << "mm\n";

	return 0;
}
