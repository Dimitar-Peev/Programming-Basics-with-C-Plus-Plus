#include <iostream>

using namespace std;

int main() {
	int a1, a2, n;
	cin >> a1 >> a2 >> n;

	for (int i = a1; i < a2; i++) {
		if (i % 2 == 0) {
			continue;
		}

		for (int j = 1; j < n; j++) {
			for (int k = 1; k < n / 2; k++) {
				if ((j + k) % 2 == 0) {
					cout << static_cast<char>(i) << '-' << j << k << i << endl;
				}
			}
		}
	}

	return 0;
}