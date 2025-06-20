#include <iostream>

using namespace std;

int main() {
	char lastSector;
	cin >> lastSector;

	int rowsInFirstSector, seatsOnOddRow;
	cin >> rowsInFirstSector >> seatsOnOddRow;

	int totalSeats = 0;

	for (char sector = 'A'; sector <= lastSector; sector++) {
		int rowsInCurrentSector = rowsInFirstSector + (sector - 'A');

		for (int row = 1; row <= rowsInCurrentSector; row++) {
			int seatsInRow;

			if (row % 2 == 0) {
				seatsInRow = seatsOnOddRow + 2;
			}
			else {
				seatsInRow = seatsOnOddRow;
			}

			for (char seat = 'a'; seat < 'a' + seatsInRow; seat++) {
				cout << sector << row << seat << endl;
				totalSeats++;
			}
		}
	}

	cout << totalSeats << endl;

	return 0;
}
