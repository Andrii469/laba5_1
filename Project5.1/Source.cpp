// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double f(const double a, const double b, const double c); 
int main()
{
	double s, t,d;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	d = f(1, t * t, s) + f(t, s * s, 1) / 1 + f(1, t * s, 1) * f(1, t * s, 1);
	cout << "d = " << d << endl;
	return 0;
}
double f(const double a, const double b, const double c)
{
	return sin(1. * a * b * c) * sin(1.*a * b * c) / (a * a) + (b * b) + (c * c);
}