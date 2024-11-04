#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b, c, average{};
	cout << "Введите 3 целых числа: ";
	cin >> a >> b >> c;
	if ((a < b && a > c) || (a < c && a > b))
		average = a;
	else if ((b < a && b > c) || (b > a && b < c))
		average = b;
	else
		average = c;
	cout << "Число, находящееся между большим и меньшим: " << average;

	return 0;
}