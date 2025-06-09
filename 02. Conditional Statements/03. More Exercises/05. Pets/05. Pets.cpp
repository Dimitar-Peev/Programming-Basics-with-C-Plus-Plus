#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int days, foodInKg;
	cin >> days >> foodInKg;

	double dogFoodKg, catFoodKg, turtleFoodGrams;
	cin >> dogFoodKg >> catFoodKg >> turtleFoodGrams;

	double neededFood = (days * dogFoodKg) + (days * catFoodKg) + (days * turtleFoodGrams / 1000);

	cout << fixed << setprecision(0);

	if (foodInKg >= neededFood) {
		cout << floor(foodInKg - neededFood) << " kilos of food left." << endl;
	}
	else {
		cout << ceil(neededFood - foodInKg) << " more kilos of food are needed." << endl;
	}

	return 0;
}
