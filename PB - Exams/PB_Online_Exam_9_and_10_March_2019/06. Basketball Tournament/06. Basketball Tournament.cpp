#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string tournamentName;
	int totalGames = 0;
	int totalWins = 0;

	while (true) {
		getline(cin >> ws, tournamentName);
		if (tournamentName == "End of tournaments") {
			break;
		}

		int numberOfGames;
		cin >> numberOfGames;

		for (int i = 1; i <= numberOfGames; i++) {
			int desiPoints, opponentPoints;
			cin >> desiPoints >> opponentPoints;
			totalGames++;

			if (desiPoints > opponentPoints) {
				totalWins++;
				cout << "Game " << i << " of tournament " << tournamentName
					<< ": win with " << desiPoints - opponentPoints << " points." << endl;
			}
			else {
				cout << "Game " << i << " of tournament " << tournamentName
					<< ": lost with " << opponentPoints - desiPoints << " points." << endl;
			}
		}
	}

	int totalLosses = totalGames - totalWins;
	double winPercent = (double)totalWins / totalGames * 100;
	double lossPercent = (double)totalLosses / totalGames * 100;

	cout << fixed << setprecision(2);
	cout << winPercent << "% matches win" << endl;
	cout << lossPercent << "% matches lost" << endl;

	return 0;
}
