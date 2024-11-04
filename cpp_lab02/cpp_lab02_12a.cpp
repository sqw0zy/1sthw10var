#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b, c, sum{};
	cout << "Введите 3 целых числа: ";
	cin >> a >> b >> c;
	if (a > 10)
		sum += a;
	if (b > 10)
		sum += b;
	if (c > 10)
		sum += c;
	cout << "Сумма чисел, больших 10-и равна " << sum;
	return 0;
}