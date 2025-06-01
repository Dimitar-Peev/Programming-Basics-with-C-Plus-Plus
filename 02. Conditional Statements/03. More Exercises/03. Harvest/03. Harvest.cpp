#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	int x;
	cin >> x;

	double y;
	cin >> y;

	int zLitters, workers;
	cin >> zLitters >> workers;

	cout << fixed << setprecision(0);

	double grapes = x * y;
	double wine = (0.4 * grapes) / 2.5;
	double diff = abs(wine - zLitters);

	if (wine >= zLitters) {
		double profitPerPerson = diff / workers;
		cout << "Good harvest this year! Total wine: " << floor(wine) << " liters." << endl;
		cout << ceil(diff) << " liters left -> " << ceil(profitPerPerson) << " liters per person." << endl;
	}
	else if (wine < zLitters) {
		cout << "It will be a tough winter! More " << floor(diff) << " liters wine needed." << endl;
	}

	return 0;
}