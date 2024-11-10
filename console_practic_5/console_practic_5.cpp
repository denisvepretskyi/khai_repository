#include <iostream>;
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int x, repeat;
	do
	{
		cout << "Введіть x:";
		cin >> x;
		switch (x) {
		case 1: cout << "Шуруп.\n"; break;
		case 2: cout << "Гайка.\n"; break;
		case 3: cout << "Гвинт.\n"; break;
		case 4: cout << "Цвях.\n"; break;
		case 5: cout << "Болт.\n"; break;
		default: cout << "Деталь не знайдено.\n";
		}
		cout << "Повторити пошук? (1 - так)" << endl;
		cin >> repeat;
	} while (repeat == 1); // організація повторень.
	return 0;
}

