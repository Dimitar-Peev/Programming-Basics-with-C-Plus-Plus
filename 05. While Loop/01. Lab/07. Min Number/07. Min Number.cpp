#include <iostream>
#include <climits>
#include <string>

using namespace std;

int main() {
	int minNumber = INT_MAX;

	string input;
	cin >> input;

	while ("Stop" != input) {
		int currentNumber = stoi(input);

		if (currentNumber < minNumber) {
			minNumber = currentNumber;
		}

		cin >> input;
	}

	cout << minNumber << endl;

	return 0;
}