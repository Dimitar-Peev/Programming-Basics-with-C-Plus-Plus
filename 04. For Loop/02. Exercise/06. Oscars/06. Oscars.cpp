#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	const double NEEDED_POINTS = 1250.5;

	string actorName;
	double initialPoints;
	int countJudges;

	getline(cin, actorName);
	cin >> initialPoints >> countJudges;

	double totalPoints = initialPoints;

	string judgeName;
	double judgePoints;

	cout << fixed << setprecision(1);

	for (int judge = 0; judge < countJudges; judge++) {

		getline(cin >> ws, judgeName);
		cin >> judgePoints;

		int judgeNameLength = judgeName.length();
		totalPoints += (judgeNameLength * judgePoints) / 2.0;

		if (totalPoints > NEEDED_POINTS) {
			cout
				<< "Congratulations, "
				<< actorName << " got a nominee for leading role with "
				<< totalPoints << "!" << endl;
			return 0;
		}
	}

	cout
		<< "Sorry, " << actorName << " you need "
		<< NEEDED_POINTS - totalPoints << " more!" << endl;

	return 0;
}