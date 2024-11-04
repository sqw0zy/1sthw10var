#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b, c, count{};
	cout << "Введите 3 числа: \n";
	cin >> a >> b >> c;
	if (a % 2 == 0)
		count++;
	if (b % 2 == 0)
		count++;
	if (c % 2 == 0)
		count++;
	cout << "Количество четных чисел равно " << count;
	

	return 0;
}