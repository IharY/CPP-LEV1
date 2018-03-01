/*
цикл с оператором For.
Вывести на экран пять раз слово "привет!"
*/

//#include "stdafx.h"
#include <iostream>
//#include <cstdlib> // эта библиотека нужна для system("pause")
using namespace std;


//int _tmain(int argc, _TCHAR* aggv[])
int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введие число\n";
	int n;
	cin >> n;
	cout << "Вы ввели число: " << n << "\n";
	cout << " Запускаем цикл повторений по введенному значению: \n";

	for (int i = 0; i < n; i++)
	{
		//	cout<<i;
		cout << "значение i = " << i << "\n"; // это строка повториться n раз с указанием занчения i = от 1 до n
	}
	system("pause");
	return 0;
}
