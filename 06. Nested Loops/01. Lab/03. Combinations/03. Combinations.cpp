#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	// Mathematical solution using arithmetic progressions. Complexity: O(1)
	//int answer = (n + 1) * (n + 2) / 2;
	//cout << answer << endl;

	int count = 0;

	for (int x1 = 0; x1 <= n; x1++) {
		for (int x2 = 0; x2 <= n; x2++) {
			int x3 = n - x1 - x2;
			if (x3 >= 0) {
				count++;
			}
		}
	}

	cout << count << endl;

	return 0;
}
