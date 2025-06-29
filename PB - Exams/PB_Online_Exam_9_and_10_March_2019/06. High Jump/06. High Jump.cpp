#include <iostream>

using namespace std;

int main() {
	int targetHeight;
	cin >> targetHeight;

	int currentHeight = targetHeight - 30;
	int totalJumps = 0;
	int failCounter = 0;
	int jumpHeight;

	while (true) {
		cin >> jumpHeight;
		totalJumps++;

		if (jumpHeight > currentHeight) {
			currentHeight += 5;
			failCounter = 0;
		}
		else {
			failCounter++;
			if (failCounter == 3) {
				cout << "Tihomir failed at " << currentHeight << "cm after " << totalJumps << " jumps." << endl;
				break;
			}
		}

		if (currentHeight > targetHeight) {
			cout << "Tihomir succeeded, he jumped over " << targetHeight << "cm after " << totalJumps << " jumps." << endl;
			break;
		}
	}

	return 0;
}
