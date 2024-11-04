#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double a, b, c, z, r;
	cout << "Введите радиус торта: "; cin >> r;
	cout << "Введите высоту торта: "; cin >> z;
	cout << "Введите длину и ширину коробки: "; cin >> a >> b;
	cout << "Введите высоту коробки: "; cin >> c;
	cout << ((a > 2 * r && b > 2 * r && c > z) ? "Торт уместится в коробку" : "Торт не уместится в коробку");

	return 0;
}