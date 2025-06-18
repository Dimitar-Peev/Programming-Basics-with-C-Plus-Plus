#include <iostream>

using namespace std;

int main() {
	int m;
	cin >> m;

	int countValid4 = 0;
	int passA = 0, passB = 0, passC = 0, passD = 0;

	for (int a = 1; a <= 9; a++) {
		for (int b = 1; b <= 9; b++) {
			if (a >= b) {
				continue;
			}

			for (int c = 1; c <= 9; c++) {
				for (int d = 1; d <= 9; d++) {
					if (c <= d) {
						continue;
					}

					int control = a * b + c * d;
					if (control == m) {
						countValid4++;
						cout << a << b << c << d << " ";
						if (countValid4 == 4) {
							passA = a;
							passB = b;
							passC = c;
							passD = d;
						}
					}
				}
			}
		}
	}

	if (countValid4 >= 4) {
		cout << endl << "Password: " << passA << passB << passC << passD << endl;
	}
	else {
		cout << endl << "No!" << endl;
	}

	return 0;
}
