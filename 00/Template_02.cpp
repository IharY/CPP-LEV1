/* 
C++ с нуля: https://code-live.ru/tag/cpp-manual/
Первая программа на C++ — урок 1: https://code-live.ru/post/cpp-hello-world/

Выравнивание текста в Visual Studio:
Ctrl+K,D Ч форматировать весь документ в соответствии с правилами, заданными в настройках.
Ctrl+K,F Ч форматировать выделенный текст.
*/

#include <iostream>
#include <cstdlib> // для system
using namespace std;

int main()
{
	cout << "Hello, world!" << endl;
	system("pause"); // Только для тех, у кого MS Visual Studio
	return 0;
}
