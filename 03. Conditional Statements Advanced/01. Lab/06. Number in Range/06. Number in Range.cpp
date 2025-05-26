#include <iostream>

using namespace std;

int main() {
	int number;
	cin >> number;

	bool isValid = number != 0 && -100 <= number && number <= 100;

	if (isValid) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}