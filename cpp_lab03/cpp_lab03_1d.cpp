#include <iostream>
using namespace std;
int main()
{
	for (double x = -1.5; x <= 1.5; x += 0.25)
	{
		if (x > 1)
			cout << "y = 1 + sqrt(|cos(x)|) = " << (1 + sqrt(abs(cos(x)))) << endl;
		else if (x <= 1 && x >= -0.5)
			cout << "y = x + 1 = " << x + 1 << endl;
		else
			cout << "y = 1 - x^2 = " << 1 - x * x << endl;

	}

	return 0;
}