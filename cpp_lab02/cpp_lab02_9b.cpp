#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y, radius{ 5 };
	cout << "Введите координаты точки: \n";
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	if (y >= 0 && (x * x + y * y <= radius * radius))
		cout << "Точка принадлежит заштрихованной части плоскости";
	else
		cout << "Точка не принадлежит заштрихованной части плоскости";

	return 0;
}