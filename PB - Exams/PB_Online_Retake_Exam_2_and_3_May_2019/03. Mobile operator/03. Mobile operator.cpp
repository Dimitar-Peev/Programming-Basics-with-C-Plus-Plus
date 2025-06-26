#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string contractLength, contractType, internet;
	int months;
	cin >> contractLength >> contractType >> internet >> months;

	double monthlyFee = 0.0;

	if (contractLength == "one") {
		if (contractType == "Small") {
			monthlyFee = 9.98;
		}
		else if (contractType == "Middle") {
			monthlyFee = 18.99;
		}
		else if (contractType == "Large") {
			monthlyFee = 25.98;
		}
		else if (contractType == "ExtraLarge") {
			monthlyFee = 35.99;
		}
	}
	else if (contractLength == "two") {
		if (contractType == "Small") {
			monthlyFee = 8.58;
		}
		else if (contractType == "Middle") {
			monthlyFee = 17.09;
		}
		else if (contractType == "Large") {
			monthlyFee = 23.59;
		}
		else if (contractType == "ExtraLarge") {
			monthlyFee = 31.79;
		}
	}

	if (internet == "yes") {
		if (monthlyFee <= 10.00) {
			monthlyFee += 5.50;
		}
		else if (monthlyFee <= 30.00) {
			monthlyFee += 4.35;
		}
		else {
			monthlyFee += 3.85;
		}
	}

	double total = monthlyFee * months;

	if (contractLength == "two") {
		total *= 0.9625;
	}

	cout << fixed << setprecision(2) << total << " lv." << endl;

	return 0;
}
