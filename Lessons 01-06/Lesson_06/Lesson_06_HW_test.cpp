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
	cout << "Введите числа\n";
	int a, b, sum = 0;
	cin >> a >> b;

	cout << "Вы ввели " << a << " и " << b << endl;
	cout << "Сумма старт= " << sum << "\n";

	if (a < b)
	{
		cout << "вы в цикле";
		//for(int i=b; i<a; i++)
		for (int i = a; i <= b; i++)
		{
			sum += i;
			cout << "Сумма внутри=" << sum << "\n";
			system("pause");

			//sum=sum+i;
		}
	}
	else
	{
		for (int i = b; i <= a; i++)
		{
			sum += i;
			cout << "Сумма внутри второго=" << sum << "\n";
			cout << "i=" << i << "\n";

		}
	}
	cout << "Сумма=" << sum << "\n";
	system("pause");
	return 0;

