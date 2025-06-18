#include <iostream>

using namespace std;

int main() {
	int start1, start2, diff1, diff2;
	cin >> start1 >> start2 >> diff1 >> diff2;

	int end1 = start1 + diff1;
	int end2 = start2 + diff2;

	for (int first = start1; first <= end1; ++first) {
		bool firstIsPrime = true;
		if (first < 2) {
			firstIsPrime = false;
		}
		else {
			for (int i = 2; i * i <= first; ++i) {
				if (first % i == 0) {
					firstIsPrime = false;
					break;
				}
			}
		}

		if (!firstIsPrime) {
			continue;
		}

		for (int second = start2; second <= end2; ++second) {
			bool secondIsPrime = true;
			if (second < 2) {
				secondIsPrime = false;
			}
			else {
				for (int j = 2; j * j <= second; ++j) {
					if (second % j == 0) {
						secondIsPrime = false;
						break;
					}
				}
			}

			if (secondIsPrime) {
				cout << first << second << endl;
			}
		}
	}

	return 0;
}
