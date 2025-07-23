#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;

	int redCount = 0, orangeCount = 0, blueCount = 0, greenCount = 0;

	for (int i = 0; i < n; ++i) {
		string color;
		cin >> color;

		if (color == "red") {
			redCount++;
		}
		else if (color == "orange") {
			orangeCount++;
		}
		else if (color == "blue") {
			blueCount++;
		}
		else if (color == "green") {
			greenCount++;
		}
	}

	int maxCount = redCount;
	string maxColor = "red";

	if (orangeCount > maxCount) {
		maxCount = orangeCount;
		maxColor = "orange";
	}

	if (blueCount > maxCount) {
		maxCount = blueCount;
		maxColor = "blue";
	}

	if (greenCount > maxCount) {
		maxCount = greenCount;
		maxColor = "green";
	}

	cout << "Red eggs: " << redCount << endl;
	cout << "Orange eggs: " << orangeCount << endl;
	cout << "Blue eggs: " << blueCount << endl;
	cout << "Green eggs: " << greenCount << endl;
	cout << "Max eggs: " << maxCount << " -> " << maxColor << endl;

	return 0;
}
