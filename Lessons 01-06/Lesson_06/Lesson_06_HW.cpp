/*
даны 2 натуральных числа a и b
необходимо найти сумму чисел от a до b включительно
*/

//#include "stdafx.h"
#include <iostream>
using namespace std;


//int _tmain(int argc, _TCHAR* aggv[])
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введитие два целых числа (a и b)\n";
	int a, b, sum = 0;
	cin >> a >> b;
	if (b < a)
	{
		int buf = a;
		a = b;
		b = buf;
	}
	for (int i = a; i <= b; i++)
	{
		sum += i;
	}
	cout << "Сумма чисел от a до b = " << sum << "\n";
	system("pause");
	return 0;
}
