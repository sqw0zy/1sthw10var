#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b, c, min;
	cout << "Введите 3 целых числа: ";
	cin >> a >> b >> c;
	if (a < b && a < c)
		min = a;
	else if (b < a && b < c)
		min = b;
	else
		min = c;
	cout << "Минимальное число: " << min;
	return 0;
}