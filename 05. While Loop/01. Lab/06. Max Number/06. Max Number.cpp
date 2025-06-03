#include <iostream>
#include <climits>
#include <string>

using namespace std;

int main() {
	int maxNumber = INT_MIN;

	string input;
	cin >> input;

	while ("Stop" != input) {
		int currentNumber = stoi(input);

		if (currentNumber > maxNumber) {
			maxNumber = currentNumber;
		}

		cin >> input;
	}

	cout << maxNumber << endl;

	return 0;
}