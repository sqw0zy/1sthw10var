#include <iostream>
using namespace std;
int main()
{
	double x{ 0 }, y{};
	do
	{
		y = log(x + 1) * sin(x);
		cout << "x=" << x << " y=" << y << endl;
		x += 0.5;
	} while (x <= 5);
	return 0;
}