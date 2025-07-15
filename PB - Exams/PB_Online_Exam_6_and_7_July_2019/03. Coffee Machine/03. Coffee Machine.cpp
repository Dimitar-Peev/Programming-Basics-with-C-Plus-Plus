#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string drink, sugar;
	int countDrinks;

	cin >> drink >> sugar >> countDrinks;

	double price = 0.0;

	if (drink == "Espresso") {
		if (sugar == "Without") {
			price = 0.9;
		}
		else if (sugar == "Normal") {
			price = 1.0;
		}
		else if (sugar == "Extra") {
			price = 1.2;
		}
	}
	else if (drink == "Cappuccino") {
		if (sugar == "Without") {
			price = 1.0;
		}
		else if (sugar == "Normal") {
			price = 1.2;
		}
		else if (sugar == "Extra") {
			price = 1.6;
		}
	}
	else if (drink == "Tea") {
		if (sugar == "Without") {
			price = 0.5;
		}
		else if (sugar == "Normal") {
			price = 0.6;
		}
		else if (sugar == "Extra") {
			price = 0.7;
		}
	}

	double totalPrice = price * countDrinks;

	if (sugar == "Without") {
		totalPrice *= 0.65;
	}

	if (drink == "Espresso" && countDrinks >= 5) {
		totalPrice *= 0.75;
	}

	if (totalPrice > 15.0) {
		totalPrice *= 0.80;
	}

	cout << fixed << setprecision(2);
	cout << "You bought " << countDrinks << " cups of " << drink << " for " << totalPrice << " lv." << endl;

	return 0;
}
