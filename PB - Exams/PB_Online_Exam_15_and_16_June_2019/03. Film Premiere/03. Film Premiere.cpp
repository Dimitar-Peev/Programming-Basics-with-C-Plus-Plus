#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string movieName, packet;
	int tickets;

	getline(cin, movieName);
	getline(cin, packet);
	cin >> tickets;

	double price = 0.0;

	if (movieName == "John Wick") {
		if (packet == "Drink") {
			price = 12;
		}
		else if (packet == "Popcorn") {
			price = 15;
		}
		else if (packet == "Menu") {
			price = 19;
		}
	}
	else if (movieName == "Star Wars") {
		if (packet == "Drink") {
			price = 18;
		}
		else if (packet == "Popcorn") {
			price = 25;
		}
		else if (packet == "Menu") {
			price = 30;
		}
	}
	else if (movieName == "Jumanji") {
		if (packet == "Drink") {
			price = 9;
		}
		else if (packet == "Popcorn") {
			price = 11;
		}
		else if (packet == "Menu") {
			price = 14;
		}
	}

	double totalPrice = tickets * price;

	if (movieName == "Star Wars" && tickets >= 4) {
		totalPrice *= 0.7;
	}

	if (movieName == "Jumanji" && tickets == 2) {
		totalPrice *= 0.85;
	}

	cout << fixed << setprecision(2);
	cout << "Your bill is " << totalPrice << " leva." << endl;

	return 0;
}
