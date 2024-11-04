#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int number;
	cout << "Введите число: "; cin >> number;
	cout << (number % 2 == 0 ? "Число является чётным" : "Число является нечётным");

	return 0;
}