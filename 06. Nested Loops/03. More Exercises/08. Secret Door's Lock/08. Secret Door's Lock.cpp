#include <iostream>

using namespace std;

int main() {
	int maxHundreds, maxTens, maxUnits;
	cin >> maxHundreds >> maxTens >> maxUnits;

	for (int h = 1; h <= maxHundreds; h++) {
		if (h % 2 != 0) {
			continue;
		}

		for (int t = 1; t <= maxTens; t++) {

			if (t != 2 && t != 3 && t != 5 && t != 7) {
				continue;
			}

			for (int u = 1; u <= maxUnits; u++) {
				if (u % 2 != 0) {
					continue;
				}

				cout << h << " " << t << " " << u << endl;
			}
		}
	}

	return 0;
}
