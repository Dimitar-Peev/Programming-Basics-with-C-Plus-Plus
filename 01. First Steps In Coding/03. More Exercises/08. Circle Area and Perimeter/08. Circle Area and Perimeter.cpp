#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double r;
	cin >> r;

	double s = M_PI * pow(r, 2);
	double p = 2 * r * M_PI;

	cout << fixed << setprecision(2) << s << endl;
	cout << fixed << setprecision(2) << p << endl;

	return 0;
}