#include<iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y, radius3{ 3 }, radius6{ 6 };
	cout << "Введите координаты точки: \n";
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << (((x * x + y * y <= radius6 * radius6) && (x * x + y * y >= radius3 * radius3) && x >= 0) ? " Точка принадлежит заштрихованной части плоскости": "Точка не принадлежит заштрихованной части плоскости");
	return 0;
}