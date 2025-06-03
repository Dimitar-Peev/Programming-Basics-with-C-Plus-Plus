#include <iostream>

using namespace std;

int main() {
	int firstNumber;
	cin >> firstNumber;

	int sum = 0;

	int currentNum;
	while (sum < firstNumber) {
		cin >> currentNum;

		sum += currentNum;
	}

	cout << sum << endl;

	return 0;
}  