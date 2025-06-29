#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int tournaments;
	int startingPoints;
	cin >> tournaments >> startingPoints;

	int totalPoints = startingPoints;
	int wonTournaments = 0;
	int pointsFromTournaments = 0;

	for (int i = 0; i < tournaments; i++) {
		string result;
		cin >> result;

		if (result == "W") {
			pointsFromTournaments += 2000;
			wonTournaments++;
		}
		else if (result == "F") {
			pointsFromTournaments += 1200;
		}
		else if (result == "SF") {
			pointsFromTournaments += 720;
		}
	}

	totalPoints += pointsFromTournaments;
	int averagePoints = pointsFromTournaments / tournaments;
	double winPercentage = (wonTournaments * 100.0) / tournaments;

	cout << "Final points: " << totalPoints << endl;
	cout << "Average points: " << averagePoints << endl;
	cout << fixed << setprecision(2) << winPercentage << "%" << endl;

	return 0;
}
