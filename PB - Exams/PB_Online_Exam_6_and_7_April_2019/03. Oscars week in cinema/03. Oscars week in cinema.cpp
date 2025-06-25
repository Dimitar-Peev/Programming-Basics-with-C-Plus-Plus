#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string movie, hallType;
	int tickets;

	getline(cin, movie);
	getline(cin, hallType);
	cin >> tickets;

	double pricePerTicket = 0.0;

	if (movie == "A Star Is Born") {
		if (hallType == "normal") {
			pricePerTicket = 7.50;
		}
		else if (hallType == "luxury") {
			pricePerTicket = 10.50;
		}
		else if (hallType == "ultra luxury") {
			pricePerTicket = 13.50;
		}
	}
	else if (movie == "Bohemian Rhapsody") {
		if (hallType == "normal") {
			pricePerTicket = 7.35;
		}
		else if (hallType == "luxury") {
			pricePerTicket = 9.45;
		}
		else if (hallType == "ultra luxury") {
			pricePerTicket = 12.75;
		}
	}
	else if (movie == "Green Book") {
		if (hallType == "normal") {
			pricePerTicket = 8.15;
		}
		else if (hallType == "luxury") {
			pricePerTicket = 10.25;
		}
		else if (hallType == "ultra luxury") {
			pricePerTicket = 13.25;
		}
	}
	else if (movie == "The Favourite") {
		if (hallType == "normal") {
			pricePerTicket = 8.75;
		}
		else if (hallType == "luxury") {
			pricePerTicket = 11.55;
		}
		else if (hallType == "ultra luxury") {
			pricePerTicket = 13.95;
		}
	}

	double total = tickets * pricePerTicket;

	cout << fixed << setprecision(2);
	cout << movie << " -> " << total << " lv." << endl;

	return 0;
}
