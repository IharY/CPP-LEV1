//перевод sm -> mm

//#include "stdafx.h"
#include <iostream>


//int _tmain(int argc, _TCHAR* aggv[])
int main()
{
	int b, n;
	std::cout << "Vvedite chisla: \n";
	std::cin >> n;
		b = 10 * n;
	std::cout << n << " cm=" << b << "mm\n";

	return 0;
}
