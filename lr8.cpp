#include <iostream>
#include <windows.h>
#include "func.h"

using namespace std;

int main()
{
	float x, y;
	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter second number: ";
	cin >> y;
	cout << "Result is " << firstFunc(x, y);
}