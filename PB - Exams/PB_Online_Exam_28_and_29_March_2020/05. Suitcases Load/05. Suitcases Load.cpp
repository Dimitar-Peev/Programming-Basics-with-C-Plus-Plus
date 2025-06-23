#include <iostream>
#include <string>

using namespace std;

int main() {
	double capacity;
	cin >> capacity;

	int suitcaseCount = 0;
	int loadedSuitcases = 0;

	string input;
	cin >> input;
	while ("End" != input) {
		double suitcaseVolume = stod(input);
		suitcaseCount++;

		if (suitcaseCount % 3 == 0) {
			suitcaseVolume *= 1.10;
		}

		if (suitcaseVolume > capacity) {
			cout << "No more space!" << endl;
			break;
		}
		else {
			capacity -= suitcaseVolume;
			loadedSuitcases++;
		}

		cin >> input;
	}

	if (input == "End") {
		cout << "Congratulations! All suitcases are loaded!" << endl;
	}

	cout << "Statistic: " << loadedSuitcases << " suitcases loaded." << endl;

	return 0;
}
