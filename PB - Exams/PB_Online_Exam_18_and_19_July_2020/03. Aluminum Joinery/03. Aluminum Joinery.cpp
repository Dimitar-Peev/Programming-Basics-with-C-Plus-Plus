#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	int count;
	string type, delivery;

	cin >> count >> type;
	cin.ignore();
	getline(cin, delivery);

	if (count < 10) {
		cout << "Invalid order" << endl;
		return 0;
	}

	double price_per_unit = 0.0;
	double discount = 0.0;

	if (type == "90X130") {
		price_per_unit = 110;
		if (count > 60) {
			discount = 0.08;
		}
		else if (count > 30) {
			discount = 0.05;
		}
	}
	else if (type == "100X150") {
		price_per_unit = 140;
		if (count > 80) {
			discount = 0.10;
		}
		else if (count > 40) {
			discount = 0.06;
		}
	}
	else if (type == "130X180") {
		price_per_unit = 190;
		if (count > 50) {
			discount = 0.12;
		}
		else if (count > 20) {
			discount = 0.07;
		}
	}
	else if (type == "200X300") {
		price_per_unit = 250;
		if (count > 50) {
			discount = 0.14;
		}
		else if (count > 25) {
			discount = 0.09;
		}
	}

	double total = count * price_per_unit;
	total -= total * discount;

	if (delivery == "With delivery") {
		total += 60;
	}

	if (count > 99) {
		total -= total * 0.04;
	}

	cout << fixed << setprecision(2) << total << " BGN" << endl;

	return 0;
}
