#include <iostream>
#include <string>

using namespace std;

int main() {
	int foodKg;
	cin >> foodKg;

	int totalFoodGrams = foodKg * 1000;
	int totalEaten = 0;

	string input;
	cin >> input;

	while ("Adopted" != input) {
		int meal = stoi(input);
		totalEaten += meal;

		cin >> input;
	}

	if (totalEaten <= totalFoodGrams) {
		cout << "Food is enough! Leftovers: " << (totalFoodGrams - totalEaten) << " grams." << endl;
	}
	else {
		cout << "Food is not enough. You need " << (totalEaten - totalFoodGrams) << " grams more." << endl;
	}

	return 0;
}
