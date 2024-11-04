#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double y;
	double pi{ M_PI };
	for (double x{ 0 }; pi * x <= 2 * pi; x += 1. / 6.)
	{
		y = cos(x * pi);
		cout << y << "=cos(" << x << "PI) \n";
	}
	return 0;
}