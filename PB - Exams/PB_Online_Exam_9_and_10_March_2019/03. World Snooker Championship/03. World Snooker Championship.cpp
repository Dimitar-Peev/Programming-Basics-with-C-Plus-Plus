#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string stage, ticketType;
	int ticketCount;
	char photoOption;

	getline(cin, stage);
	getline(cin, ticketType);
	cin >> ticketCount;
	cin >> photoOption;

	double pricePerTicket = 0;

	if (stage == "Quarter final") {
		if (ticketType == "Standard") {
			pricePerTicket = 55.50;
		}
		else if (ticketType == "Premium") {
			pricePerTicket = 105.20;
		}
		else if (ticketType == "VIP") {
			pricePerTicket = 118.90;
		}
	}
	else if (stage == "Semi final") {
		if (ticketType == "Standard") {
			pricePerTicket = 75.88;
		}
		else if (ticketType == "Premium") {
			pricePerTicket = 125.22;
		}
		else if (ticketType == "VIP") {
			pricePerTicket = 300.40;
		}
	}
	else if (stage == "Final") {
		if (ticketType == "Standard") {
			pricePerTicket = 110.10;
		}
		else if (ticketType == "Premium") {
			pricePerTicket = 160.66;
		}
		else if (ticketType == "VIP") {
			pricePerTicket = 400.00;
		}
	}

	double totalPrice = pricePerTicket * ticketCount;

	if (totalPrice > 4000) {
		totalPrice *= 0.75;
	}
	else if (totalPrice > 2500) {
		totalPrice *= 0.90;
		if (photoOption == 'Y') {
			totalPrice += ticketCount * 40.0;
		}
	}
	else {
		if (photoOption == 'Y') {
			totalPrice += ticketCount * 40.0;
		}
	}

	cout << fixed << setprecision(2) << totalPrice << endl;

	return 0;
}
