# Базовый уровень C++
### Полезные ссылки
* **C++ с нуля** - *Initial work* - [Сode-Live.ru](https://code-live.ru/tag/cpp-manual/)
* **Язык программирования С++** - [cppstudio.com](http://cppstudio.com)
* **Язык C++** - [prog-cpp.ru](https://prog-cpp.ru/cpp/)
* **Денис Марков С++** - [28 уроков на Youtube](https://www.youtube.com/playlist?list=PLbmlzoDQrXVFC13GjpPrJxl6mzTiX65gs)
* **Настройка Sublime для работы c С++** *Использование компилятора MinGW в Sublime Text 3* <http://www.cyberforum.ru/blogs/390663/blog1982.html>
* **C++ shell** - *оналайн компитлятор* <http://cpp.sh/>


## Getting Started

### Урок 1-2 : программа "Hello Word", Ввод-вывод данных

```cpp
#include <iostream>

int main()
{
	std::cout << "Hello, world!";
	return 0;
}
``` 

```cpp

#include <iostream>
using namespace std;

int main()
{
	cout << "Hello, world!" << endl;
	system("pause"); 
	return 0;
}
``` 

```cpp
// Example program C++ shell http://cpp.sh/

#include <iostream>
#include <string>

int main()
{
	std::string name;
	std::cout << "What is your name? ";
	getline(std::cin, name);
	std::cout << "Hello, " << name << "!\n";
}
``` 

```cpp
/*
Программа урока №1
перевод sm -> mm
*/

//#include "stdafx.h" //для консольного приложения
#include <iostream>

//int _tmain(int argc, _TCHAR* aggv[]) //для консольного приложения
int main()
{
	int b, n;
	std::cout << "Vvedite chisla: \n";
	std::cin >> n;
		b = 10 * n;
	std::cout << n << " cm=" << b << "mm\n";

	return 0;
}
```

### Урок 3-5 : ветвление (If) и циклы (For)

```cpp
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
```

```cpp

//#include "stdafx.h"
#include <cstdlib> // эта библиотека нужна для system("pause"), но работает и без нее
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "введие число\n";
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "привет!\n"; // выводим "привет!" в цикле n-раз
	}
	system("pause");
	return 0;
}
```

### Урок 6 : ешё примеры c циклами

```cpp
/*
(даны 2 натуральных числа a и n необходимо число a возвести в степень n)
*/

//#include "stdafx.h"
#include <iostream>
using namespace std;

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
```

```cpp
/*
дано натуральное число 
необходимо найти n факториал(!n)
*/

//#include "stdafx.h"
#include <iostream>
using namespace std;

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
```

```cpp
/*
даны 2 натуральных числа a и b
необходимо найти сумму чисел от a до b включительно
*/


//#include "stdafx.h"
#include <iostream>
using namespace std;

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
```

## Links

* [Dropwizard](http://www.dropwizard.io/1.0.2/docs/) - The web framework used
* [Maven](https://maven.apache.org/) - Dependency Management
* [ROME](https://rometools.github.io/rome/) - Used to generate RSS Feeds

## Authors

* **Billie Thompson** - *Initial work* - [PurpleBooth](https://github.com/PurpleBooth)

## Acknowledgments

* Hat tip to anyone who's code was used
* Inspiration
* etc

