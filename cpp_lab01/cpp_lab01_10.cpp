#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	double a{}, b{}, c{}, V{}, S{};
	cout << "Введите, пожалуйста, длины ребер прямоугольного параллелепипеда:" << endl;
	cout << "a:"; cin >> a;
	cout << "b:"; cin >> b;
	cout << "c:"; cin >> c;
	V = a * b * c;
	S = 2 * (a * b + b * c + a * c);
	cout << "Объём прямоугольного параллелепипеда равен " << V << endl;
	cout << "Площадь поверхности прямоугольного параллелепипеда равна " << S << endl;
	return 0;
}