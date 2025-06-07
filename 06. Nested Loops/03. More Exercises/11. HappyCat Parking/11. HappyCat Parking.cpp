#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int days, hours;
	cin >> days >> hours;

	double total = 0;

	cout << fixed << setprecision(2);

	for (int i = 1; i <= days; i++) {
		double cost = 0;

		for (int j = 1; j <= hours; j++) {
			if (i % 2 == 0 && j % 2 != 0) {
				cost += 2.5;
			}
			else if (i % 2 != 0 && j % 2 == 0) {
				cost += 1.25;
			}
			else {
				cost += 1;
			}
		}

		cout << "Day: " << i << " - " << cost << " leva" << endl;

		total += cost;
	}

	cout << "Total: " << total << " leva" << endl;

	return 0;
}
