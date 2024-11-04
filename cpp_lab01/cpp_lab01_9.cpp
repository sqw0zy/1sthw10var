#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N{}, hours{}, minutes{}, sec{};
	cout << "Введите количество секунд, которые прошли с начала суток: ";
	cin >> N;
	hours = N / 3600;
	minutes = (N -hours*3600)/ 60;
	sec = N % 60;
	if (hours == 1)
		cout << hours << " час, ";
	else if (hours > 4 || hours ==0)
		cout << hours << " часов, ";
	else
		cout << hours << " часа, ";
	if (minutes == 1)
		cout << minutes << " минута, ";
	else if (minutes > 4 || minutes ==0)
		cout << minutes << " минут, ";
	else
		cout << minutes << " минуты, ";
	if (sec == 1)
		cout << sec << " секунда. ";
	else if (sec > 4 || sec == 0)
		cout << sec << " секунд. ";
	else
		cout << sec << " секунды. "; 
	
	//cout << hours << " часов, " << minutes << " минут, " << sec << " секунд." << endl;
	return 0;
}