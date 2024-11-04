#include<iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y, func;
	cout << "Введите координаты точки: \n";
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	func = -2 * x + 2;
	if (y <= func && x >= 0 && y >= 0)
		cout << "Точка принадлежит заштрихованной части плоскости";
	else
		cout << "Точка не принадлежит заштрихованной части плоскости";
	return 0;
}