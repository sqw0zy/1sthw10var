#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int number, first, last;
	cout << "Введите четырехзначное целое число: ";
	cin >> number;
	first = number / 1000;
	last = number % 10;
	cout << "Первая цифра = " << first << endl << "Последняя цифра = " << last;
	return 0;
}