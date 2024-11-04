#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, y, radius1{ 2 }, radius2{ 4 };
	cout << "Введите координаты попадания: \n";
	cout << "Введите координату x: "; cin >> x;
	cout << "Введите координату y: "; cin >> y;
	if (x * x + y * y <= radius2*radius2) // формула х^2 + y^2 = R^2
	{
		if (x * x + y * y <= radius1*radius1)
			cout << "Количество выбитых очков равно 10";
		else
			cout << "Количество выбитых очков равно 5";
	}
	else
		cout << "Вы не выбили ни одного очка";
	return 0;
}