#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double r, a, b;
	cout << "Введите радиус торта: "; cin >> r;
	cout << "Введите длины сторон коробки: "; cin >> a >> b;

	cout << (a > 2 * r && b > 2 * r ? "Торт уместится в коробке": "Торт не уместится в коробке");

	return 0;
}