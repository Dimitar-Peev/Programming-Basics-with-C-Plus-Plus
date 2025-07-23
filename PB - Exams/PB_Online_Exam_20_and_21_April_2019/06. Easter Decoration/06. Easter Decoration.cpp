#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	int clients;
	cin >> clients;
	cin.ignore();

	double totalSum = 0.0;

	for (int i = 0; i < clients; i++) {
		string product;
		int itemCount = 0;
		double clientTotal = 0.0;

		while (true) {
			getline(cin, product);

			if (product == "Finish") {
				break;
			}

			itemCount++;

			if (product == "basket") {
				clientTotal += 1.50;
			}
			else if (product == "wreath") {
				clientTotal += 3.80;
			}
			else if (product == "chocolate bunny") {
				clientTotal += 7.00;
			}
		}

		if (itemCount % 2 == 0) {
			clientTotal *= 0.80;
		}

		cout << fixed << setprecision(2);
		cout << "You purchased " << itemCount << " items for " << clientTotal << " leva." << endl;

		totalSum += clientTotal;
	}

	double average = totalSum / clients;
	cout << fixed << setprecision(2);
	cout << "Average bill per client is: " << average << " leva." << endl;

	return 0;
}
