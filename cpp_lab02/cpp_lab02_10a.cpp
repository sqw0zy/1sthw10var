#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double z, y, x;
	cout << "Введите длины сторон трейшольника: ";
	cin >> z >> y >> x;
	if ((z + y > x) && (z + x > y) && (x + y > z))
		cout << "Такой треугольник и правда существует!";
	else
		cout << "Такого треугольника в нашем измерении не существет";
	return 0;
}