#include <iostream>

using namespace std;

int main() {
	string product, day;
	cin >> product >> day;

	double quantity;
	cin >> quantity;

	bool workingDays = day == "Monday"
		|| day == "Tuesday"
		|| day == "Wednesday"
		|| day == "Thursday"
		|| day == "Friday";

	bool weekend = day == "Saturday" || day == "Sunday";

	double price = 0;

	if (workingDays) {
		if (product == "banana") {
			price = 2.5;
		}
		else if (product == "apple") {
			price = 1.2;
		}
		else if (product == "orange") {
			price = 0.85;
		}
		else if (product == "grapefruit") {
			price = 1.45;
		}
		else if (product == "kiwi") {
			price = 2.7;
		}
		else if (product == "pineapple") {
			price = 5.5;
		}
		else if (product == "grapes") {
			price = 3.85;
		}

	}
	else if (weekend) {
		if (product == "banana") {
			price = 2.7;
		}
		else if (product == "apple") {
			price = 1.25;
		}
		else if (product == "orange") {
			price = 0.9;
		}
		else if (product == "grapefruit") {
			price = 1.6;
		}
		else if (product == "kiwi") {
			price = 3;
		}
		else if (product == "pineapple") {
			price = 5.6;
		}
		else if (product == "grapes") {
			price = 4.2;
		}
	}

	if (price > 0) {
		double totalCosts = price * quantity;

		cout.setf(ios::fixed);
		cout.precision(2);
		cout << totalCosts << endl;
	}
	else {
		cout << "error" << endl;
	}
}