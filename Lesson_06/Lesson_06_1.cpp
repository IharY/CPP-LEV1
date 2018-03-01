/*
(даны 2 натуральных числа a и n необходимо число a возвести в степень n)
*/

//#include "stdafx.h"
#include <iostream>
using namespace std;


//int _tmain(int argc, _TCHAR* aggv[])
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите числа\n";
	int a, n, step = 1;
	cin >> a >> n;
	for (int i = 1; i <= n; i++)
	{
		step *= a;
	}
	cout << a << "^" << n << "=" << step << "\n";
	system("pause");
	return 0;
}