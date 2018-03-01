/*
цикл с оператором For.
Вывести на экран пять раз слово "привет!"
*/

//#include "stdafx.h"
#include <iostream>
#include <cstdlib> // эта библиотека нужна для system("pause")
using namespace std;


//int _tmain(int argc, _TCHAR* aggv[])
int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "введие число\n";
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "привет!\n";
	}
	system("pause");
	return 0;
}
