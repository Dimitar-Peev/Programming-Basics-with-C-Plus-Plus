#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	string city;
	cin >> city;

	double sales;
	cin >> sales;

	double commisionPercent = -1;
	double commissionInMoney = 0;

	bool isError = false;

	if (sales < 0) {
		isError = true;
	}
	else {
		if (city == "Sofia") {
			if (sales <= 500) {
				commisionPercent = 0.05;
			}
			else if (sales <= 1000) {
				commisionPercent = 0.07;
			}
			else if (sales <= 10000) {
				commisionPercent = 0.08;
			}
			else {
				commisionPercent = 0.12;
			}
		}
		else if (city == "Varna") {
			if (sales <= 500) {
				commisionPercent = 0.045;
			}
			else if (sales <= 1000) {
				commisionPercent = 0.075;
			}
			else if (sales <= 10000) {
				commisionPercent = 0.10;
			}
			else {
				commisionPercent = 0.13;
			}
		}
		else if (city == "Plovdiv") {
			if (sales <= 500) {
				commisionPercent = 0.055;
			}
			else if (sales <= 1000) {
				commisionPercent = 0.08;
			}
			else if (sales <= 10000) {
				commisionPercent = 0.12;
			}
			else {
				commisionPercent = 0.145;
			}
		}
		else {
			isError = true;
		}


	}

	if (isError) {
		cout << "error" << endl;
	}
	else {
		commissionInMoney = sales * commisionPercent;

		cout << fixed << setprecision(2) << commissionInMoney << endl;
	}

	return 0;
}