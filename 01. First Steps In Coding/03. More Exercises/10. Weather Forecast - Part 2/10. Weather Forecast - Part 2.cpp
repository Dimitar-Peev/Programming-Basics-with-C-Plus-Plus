#include <iostream>

using namespace std;

int main() {
	double celsius;
	cin >> celsius;

	string weather = "";

	if (celsius >= 26 && celsius <= 35) {
		weather = "Hot";
	}
	else if (celsius >= 20.1 && celsius <= 25.9) {
		weather = "Warm";
	}
	else if (celsius >= 15.00 && celsius <= 20.00) {
		weather = "Mild";
	}
	else if (celsius >= 12.00 && celsius <= 14.9) {
		weather = "Cool";
	}
	else if (celsius >= 5.00 && celsius <= 11.9) {
		weather = "Cold";
	}
	else {
		weather = "unknown";
	}

	cout << weather << endl;

	return 0;
}