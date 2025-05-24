#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string figureType;
	cin >> figureType;

	double area;

	if (figureType == "square") {
		double a;
		cin >> a;

		area = a * a;
	}
	else if (figureType == "rectangle") {
		double a, b;
		cin >> a >> b;

		area = a * b;
	}
	else if (figureType == "circle") {
		double radius;
		cin >> radius;

		area = M_PI * pow(radius, 2);
	}
	else if (figureType == "triangle") {
		double a, ha;
		cin >> a >> ha;

		area = a * ha / 2;
	}

	cout.setf(ios::fixed);
	cout.precision(3);

	cout << area << endl;

	return 0;
}