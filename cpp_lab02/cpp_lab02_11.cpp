#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int birthday, birthmonth, birthyear, day, year, month, result;
	cout << "Введите дату своего рождения: \n";
	cout << "Год: "; cin >> birthyear;
	cout << "Номер месяца: "; cin >> birthmonth;
	cout << "День месяца: "; cin >> birthday;
	cout << "Введите текущую дату: \n";
	cout << "Год: "; cin >> year;
	cout << "Номер месяца: "; cin >> month;
	cout << "День месяца: "; cin >> day;
	if (((year >= birthyear) && (((month == birthmonth) && (day >= birthday)) || month > birthmonth)))
		result = year - birthyear;
	else
		result = year - birthyear - 1;
	switch (result) {
	case 2:
	case 3:
	case 4: cout << "Вам " << result << " года"; break;

	case 1: cout << "Вам 1 год"; break;
	default: cout << "Вам " << result << " лет"; 
	}

	return 0;
}