#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string townName, type, VIP;
	int countDays;

	cin >> townName >> type >> VIP >> countDays;

	double price = 0.0;
	bool invalidInput = false;

	if (townName == "Bansko" || townName == "Borovets") {
		if (type == "withEquipment") {
			price = 100;
			if (VIP == "yes") {
				price *= 0.90;
			}
		}
		else if (type == "noEquipment") {
			price = 80;
			if (VIP == "yes") {
				price *= 0.95;
			}
		}
		else {
			invalidInput = true;
		}
	}
	else if (townName == "Varna" || townName == "Burgas") {
		if (type == "withBreakfast") {
			price = 130;
			if (VIP == "yes") {
				price *= 0.88;
			}
		}
		else if (type == "noBreakfast") {
			price = 100;
			if (VIP == "yes") {
				price *= 0.93;
			}
		}
		else {
			invalidInput = true;
		}
	}
	else {
		invalidInput = true;
	}

	if (countDays > 7) {
		countDays--;
	}

	if (countDays < 1) {
		cout << "Days must be positive number!" << endl;
	}
	else if (invalidInput) {
		cout << "Invalid input!" << endl;
	}
	else {
		double totalSum = price * countDays;
		cout << fixed << setprecision(2);
		cout << "The price is " << totalSum << "lv! Have a nice time!" << endl;
	}

	return 0;
}
