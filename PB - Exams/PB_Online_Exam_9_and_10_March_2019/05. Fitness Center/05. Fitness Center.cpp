#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	int visitors;
	cin >> visitors;

	int back = 0, chest = 0, legs = 0, abs = 0;
	int proteinShake = 0, proteinBar = 0;

	for (int i = 0; i < visitors; i++) {
		string activity;
		getline(cin >> ws, activity);

		if (activity == "Back") {
			back++;
		}
		else if (activity == "Chest") {
			chest++;
		}
		else if (activity == "Legs") {
			legs++;
		}
		else if (activity == "Abs") {
			abs++;
		}
		else if (activity == "Protein shake") {
			proteinShake++;
		}
		else if (activity == "Protein bar") {
			proteinBar++;
		}
	}

	int workoutCount = back + chest + legs + abs;
	int proteinCount = proteinShake + proteinBar;

	double workoutPercent = (workoutCount * 100.0) / visitors;
	double proteinPercent = (proteinCount * 100.0) / visitors;

	cout << back << " - back" << endl;
	cout << chest << " - chest" << endl;
	cout << legs << " - legs" << endl;
	cout << abs << " - abs" << endl;
	cout << proteinShake << " - protein shake" << endl;
	cout << proteinBar << " - protein bar" << endl;
	cout << fixed << setprecision(2) << workoutPercent << "% - work out" << endl;
	cout << fixed << setprecision(2) << proteinPercent << "% - protein" << endl;

	return 0;
}
