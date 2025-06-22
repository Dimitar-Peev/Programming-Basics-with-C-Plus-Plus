#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	double budget;
	char gender;
	int age;
	string sport;

	cin >> budget >> gender >> age >> sport;

	double price = 0.0;

	switch (gender) {
	case 'm':
		if (sport == "Gym") price = 42.0;
		else if (sport == "Boxing") price = 41.0;
		else if (sport == "Yoga") price = 45.0;
		else if (sport == "Zumba") price = 34.0;
		else if (sport == "Dances") price = 51.0;
		else if (sport == "Pilates") price = 39.0;
		break;
	case 'f':
		if (sport == "Gym") price = 35.0;
		else if (sport == "Boxing") price = 37.0;
		else if (sport == "Yoga") price = 42.0;
		else if (sport == "Zumba") price = 31.0;
		else if (sport == "Dances") price = 53.0;
		else if (sport == "Pilates") price = 37.0;
		break;
	}

	if (age <= 19) {
		price *= 0.80;
	}

	cout << fixed << setprecision(2);

	if (budget >= price) {
		cout << "You purchased a 1 month pass for " << sport << "." << endl;
	}
	else {
		double diff = price - budget;
		cout << "You don't have enough money! You need $" << diff << " more." << endl;
	}

	return 0;
}
