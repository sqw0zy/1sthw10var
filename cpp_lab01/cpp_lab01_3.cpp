#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double cel, far, kel;
	cout << "Введите температуру в градусах Цельсия:"; cin >> cel ;
	far = 9. / 5 * cel + 32;
	kel = cel + 273;
	cout << "Температура в градусах Фаренгйта: " << far << endl;
	cout << "Температура в градусах Кельвина:" << kel << endl;
	return 0;
}