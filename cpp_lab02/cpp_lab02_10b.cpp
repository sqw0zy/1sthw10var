#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double z, y, x;
	cout << "Введите длины сторон треугольника: ";
	cin >> z >> y >> x;
	if ((z + y > x) && (z + x > y) && (x + y > z))
	{
		if (y == z || y == x || x == z)
		{
			if (y == x && x == z)
				cout << "Треугольник является равносторонним";
			else
				cout << "Треугольник является равнобедренным";
		}
		else if ((z * z + y * y == x * x) || (z * z + x * x == y * y) || (y * y + x * x == z * z))
			cout << "Треугольник является прямоугольным";
		else
			cout << "Треугольник как треугольник, ничем не выделяется";
	}
	else
		cout << "Такого треугольника в нашем измерении не найти";
	return 0;
}