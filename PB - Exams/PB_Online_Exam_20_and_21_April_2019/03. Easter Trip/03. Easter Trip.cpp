#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string destination;
	string reservationDates;
	int numberOfNights;

	cin >> destination >> reservationDates >> numberOfNights;

	double pricePerNight = 0.0;

	if (destination == "France") {
		if (reservationDates == "21-23") {
			pricePerNight = 30.0;
		}
		else if (reservationDates == "24-27") {
			pricePerNight = 35.0;
		}
		else if (reservationDates == "28-31") {
			pricePerNight = 40.0;
		}
	}
	else if (destination == "Italy") {
		if (reservationDates == "21-23") {
			pricePerNight = 28.0;
		}
		else if (reservationDates == "24-27") {
			pricePerNight = 32.0;
		}
		else if (reservationDates == "28-31") {
			pricePerNight = 39.0;
		}
	}
	else if (destination == "Germany") {
		if (reservationDates == "21-23") {
			pricePerNight = 32.0;
		}
		else if (reservationDates == "24-27") {
			pricePerNight = 37.0;
		}
		else if (reservationDates == "28-31") {
			pricePerNight = 43.0;
		}
	}

	double totalCost = pricePerNight * numberOfNights;

	cout << fixed << setprecision(2);
	cout << "Easter trip to " << destination << " : " << totalCost << " leva." << endl;

	return 0;
}
	