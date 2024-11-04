#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	const double PI = 3.14159;
	double radius, volume;
	cout << "Please, enter the radius of the sphere: ";
	cin >> radius;
	volume = 4. / 3. * PI * (radius*radius*radius);
	cout << "the volume of the sphere is " << volume;
	return 0;
}