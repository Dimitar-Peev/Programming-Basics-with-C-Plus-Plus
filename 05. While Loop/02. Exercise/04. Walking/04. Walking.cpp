#include <iostream>
#include <string>

using namespace std;

int main() {
	const int goal = 10000;
	int totalSteps = 0;

	while (totalSteps < goal) {
		string input;
		getline(cin >> ws, input);

		if (input == "Going home") {
			int homeSteps;
			cin >> homeSteps;
			totalSteps += homeSteps;
			break;
		}
		else {
			int steps = stoi(input);
			totalSteps += steps;
		}
	}

	if (totalSteps >= goal) {
		cout << "Goal reached! Good job!" << endl;
	}
	else {
		cout << (goal - totalSteps) << " more steps to reach goal." << endl;
	}

	return 0;
}
