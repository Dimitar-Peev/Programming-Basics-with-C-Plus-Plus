#include <iostream>
#include <string>

using namespace std;

int main() {
	int firstNum, secondNum;
	cin >> firstNum >> secondNum;

	int s1 = (firstNum / 1000) % 10,
		s2 = (firstNum / 100) % 10,
		s3 = (firstNum / 10) % 10,
		s4 = firstNum % 10;

	int e1 = (secondNum / 1000) % 10,
		e2 = (secondNum / 100) % 10,
		e3 = (secondNum / 10) % 10,
		e4 = secondNum % 10;

	for (int i = s1; i <= e1; i++) {
		for (int j = s2; j <= e2; j++) {
			for (int k = s3; k <= e3; k++) {
				for (int l = s4; l <= e4; l++) {
					if (i % 2 != 0 && j % 2 != 0 && k % 2 != 0 && l % 2 != 0) {
						cout << i << j << k << l << " ";
					}
				}
			}
		}
	}

	cout << endl;
	return 0;
}
