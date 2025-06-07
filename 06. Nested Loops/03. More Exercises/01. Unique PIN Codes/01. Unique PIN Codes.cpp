#include <iostream>

using namespace std;

int main() {

	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;

	for (int i1 = 2; i1 <= n1; i1 += 2) {
		for (int i2 = 2; i2 <= 7 && i2 <= n2; i2++) {
			if (i2 == 4 || i2 == 6) {
				continue;
			}

			for (int i3 = 2; i3 <= n3; i3 += 2) {
				cout << i1 << ' ' << i2 << ' ' << i3 << endl;
			}
		}
	}

	return 0;
}
