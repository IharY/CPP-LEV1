//#include "stdafx.h"
#include <iostream>

//int _tmain(int argc, _TCHAR* argv[])
int main()
{
	int a,b,sum;
    std::cout<< "Vvedite dva celyh chisla: \n";
	std::cin >>a;
	std::cin >>b;
	sum=a+b;
	std::cout<< "Summa vvedenyh chisel = " << sum;
	return 0;
}
