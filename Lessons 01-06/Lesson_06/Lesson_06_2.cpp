/*
(Необходимо натуральное число n умножить на натуральное число a 
при этом оператор умножения не использовать)
*/

//#include "stdafx.h"
#include <iostream>
using namespace std;


//int _tmain(int argc, _TCHAR* aggv[])
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите число\n";
	int a, n, proz = 0;
	cin >> a >> n;
	for (int i = 1; i <= n; i++)
	{
		proz += a;
	}
	cout << a << "*" << n << "=" << proz << "\n";
	system("pause");
	return 0;
}
