#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	double balance = 0;

	string deposit;
	cin >> deposit;

	cout << fixed << setprecision(2);

	while ("NoMoreMoney" != deposit) {
		double depositDecimal = stod(deposit);

		if (depositDecimal < 0) {
			cout << "Invalid operation!" << endl;
			break;
		}

		balance += depositDecimal;

		cout << "Increase: " << depositDecimal << endl;

		cin >> deposit;
	}

	cout << "Total: " << balance << endl;

	return 0;
}