#include <iostream>
#include "windows.h"
#include "math.h"

using namespace std;

int main()
{
	int pld;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float y, x, x1 = 1, x2 = 3, h = 0.2;

	cout << "Початкове значення х = 1, кінцеве значення = 3, а крок за х = 0.2" << endl << "При таких значеннях протабульована функція Y = cos(x) + ln(x) - exp(x) матиме вигляд: " << endl;

	x = x1;

	while (x <= x2)
	{
		y = cos(x) + log(x) - exp(x);
		cout << y << endl;
		x += h;
	}
}
