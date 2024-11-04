#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y;
	cout << "Введите координаты точки: ";
	cout << "Введите координаты x: "; cin >> x;
	cout << "Введите координаты y: "; cin >> y;
	cout << ((y <= 1 && y >= 0 && x <= 0 && x >= -2) ? "Точка принадлежит заштрихованной области" : "Точка не принадлежит заштрихованной области");
	return 0;
}