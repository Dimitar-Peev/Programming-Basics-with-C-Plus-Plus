#include <iostream>
#include <string>

using namespace std;

int main() {
	string totalDaysInput;
	getline(cin, totalDaysInput);
	int totalDays = stoi(totalDaysInput);

	double totalWonAmount = 0;
	int wonDays = 0;

	for (int i = 0; i < totalDays; i++) {
		int currentWins = 0, currentLosses = 0;

		string game;
		while (getline(cin, game) && "Finish" != game) {
			string result;
			getline(cin, result);

			if (result == "win") {
				currentWins++;
			}
			else if (result == "lose") {
				currentLosses++;
			}
		}

		double currentWonAmount = currentWins * 20;
		if (currentWins > currentLosses) {
			currentWonAmount *= 1.1;
			wonDays++;
		}

		totalWonAmount += currentWonAmount;
	}

	string status;
	if (2 * wonDays > totalDays) {
		totalWonAmount *= 1.2;
		status = "won";
	}
	else {
		status = "lost";
	}

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "You " << status << " the tournament! Total raised money: " << totalWonAmount << endl;

	return 0;
}
