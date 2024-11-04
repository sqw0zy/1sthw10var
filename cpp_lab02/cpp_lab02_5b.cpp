#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double z, y, x, a, b;
	cout << "Введите высоту, ширину и длину кирпича: ";
	cin >> z >> y >> x;
	cout << "Введите длину и ширину отверстия: ";
	cin >> b >> a;
	cout << ((b > z && a > y) || (b > z && a > x) || (b > y && a > z) || (b > y && a > x) || (b > x && a > z) || (b > x && a > y) ? "Кирпич пройдет через отверстие" : "Кирпич не пройдет через отверстие");


	return 0;
}