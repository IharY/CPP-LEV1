/*
дано натуральное число 
необходимо найти n факториал(!n)
*/

//#include "stdafx.h"
#include <iostream>
using namespace std;


//int _tmain(int argc, _TCHAR* aggv[])
int main()
{
	setlocale(LC_ALL, "Russian");
	cout<<"Введите число\n";
	int n, fact = 1;
	cin>> n;
	for(int i=1; i<=n; i++)
	{
		fact *=i;
	}
	cout << n << "=" << fact << "\n";
	system("pause");
	return 0;
}

