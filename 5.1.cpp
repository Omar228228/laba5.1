// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double f(const double x, const double y, const double z); // прототип
double c(const double t, const double s); // прототип
int main()
{
	double t, s;

	cout << "t = "; cin >> t;
	cout << "s = "; cin >> s;
	cout << "c = " << c(t, s) << endl;
	return 0;
}

double c(const double t, const double s)
{
	return (f(t, s, 2.0) + f(1.0, s + t, t - s)) / (1.0 + (f(1.0, 1.0, pow(t, 2) + pow(s, 2)) * f(1.0, 1.0, pow(t, 2) + pow(s, 2))));
}

double f(const double a, const double b, const double c) // визначення
{
	return (a + b + c) / (sin(a * b) * sin(a * b) + pow(c, 2));
}