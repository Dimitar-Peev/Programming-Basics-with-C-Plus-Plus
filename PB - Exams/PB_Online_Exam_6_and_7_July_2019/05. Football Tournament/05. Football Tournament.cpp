#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	string teamName;
	int gamesPlayed;

	getline(cin, teamName);
	cin >> gamesPlayed;

	if (gamesPlayed == 0) {
		cout << teamName << " hasn't played any games during this season." << endl;
		return 0;
	}

	int wins = 0, draws = 0, losses = 0;
	char result;

	for (int i = 0; i < gamesPlayed; i++) {
		cin >> result;

		switch (result) {
			case 'W': wins++; break;
			case 'D': draws++; break;
			case 'L': losses++; break;
		}

	}

	int totalPoints = wins * 3 + draws * 1;
	double winRate = (wins * 100.0) / gamesPlayed;

	cout << teamName << " has won " << totalPoints << " points during this season." << endl;
	cout << "Total stats:" << endl;
	cout << "## W: " << wins << endl;
	cout << "## D: " << draws << endl;
	cout << "## L: " << losses << endl;
	cout << fixed << setprecision(2);
	cout << "Win rate: " << winRate << "%" << endl;

	return 0;
}
