#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int d1 = 1; d1 <= 9; d1++) {
		for (int d2 = 1; d2 <= 9; d2++) {
			for (int d3 = 1; d3 <= 9; d3++) {
				for (int d4 = 1; d4 <= 9; d4++) {
					int sumFirstTwo = d1 + d2;
					int sumLastTwo = d3 + d4;

					if (sumFirstTwo == sumLastTwo && n % sumFirstTwo == 0) {
						cout << d1 << d2 << d3 << d4 << ' ';
					}
				}
			}
		}
	}

	return 0;
}
