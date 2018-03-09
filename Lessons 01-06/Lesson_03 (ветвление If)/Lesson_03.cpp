//#include "stdafx.h"
#include <iostream>



//int _tmain(int argc, _TCHAR* aggv[])
int main()
{
	setlocale(0, "");
	double num;

	cout << "Введите произвольное число: ";
	cin >> num;

	if (num < 10) { // Если введенное число меньше 10.
		cout << "Это число меньше 10." << endl;
	}
	else { // иначе
		cout << "Это число больше либо равно 10." << endl;
	}
	return 0;
}