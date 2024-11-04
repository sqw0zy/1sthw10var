#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double a1, b1, a2, b2, a3, b3, s1, s2 ,s3;
	cout << "Введите стороны первого прямоугольника \n";
	cout << "a1= "; cin >> a1;
	cout << "b1= "; cin >> b1;
	cout << "Введите стороны второго прямоугольника \n";
	cout << "a2= "; cin >> a2;
	cout << "b2= "; cin >> b2;
	cout << "Введите стороны третьего прямоугольника \n";
	cout << "a3= "; cin >> a3;
	cout << "b3= "; cin >> b3;
	s1 = a1 * b1;
	s2 = a2 * b2;
	s3 = a3 * b3;
	if (s1 > s2 && s1 > s3)
		cout << "max площадь у первого прямоугольника, S= " << s1;
	else if (s2 > s1 && s2 > s3)
		cout << "max площадь у второго прямоугольника, S= " << s2;
	else
		cout << "max площадь у третьего прямоугольника, S= " << s3;

	return 0;
}