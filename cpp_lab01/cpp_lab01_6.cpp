#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	double radius{}, height{}, volume{}, area{};
	cout << "Введите радиус цилиндра: ";
	cin >> radius;
	cout << "Введитe высоту цилиндра:";
	cin >> height;
	volume = M_PI * radius * radius * height;
	area = M_PI * radius * 2 * (radius + height);
	
	if (height != 0 && radius != 0) {
		cout << "Объем цилиндра равен " << volume << endl;
		cout << "Площадь поверхности цилиндра равна " << area;
	}
	else if (height == 0) {
		cout << "У вас получился не цилиндр, а круг, и его площадь равна " << area / 2 << endl;
		cout << "А объём у круга отсутствует";
	}
	else {
		cout << "У вас получился не цилиндр, а отрезок, у которого нет ни площади поверхности, ни объёма" << endl;
		cout << "Длина вашего отрезка равна " << height;

	}
	return 0;
} 