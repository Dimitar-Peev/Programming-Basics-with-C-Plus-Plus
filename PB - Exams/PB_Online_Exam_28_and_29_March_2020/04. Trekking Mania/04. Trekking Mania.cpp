#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int groups;
	cin >> groups;

	int musala = 0;
	int montblanc = 0;
	int kilimanjaro = 0;
	int k2 = 0;
	int everest = 0;

	int totalPeople = 0;

	for (int i = 0; i < groups; i++) {
		int peopleInGroup;
		cin >> peopleInGroup;

		totalPeople += peopleInGroup;

		if (peopleInGroup <= 5) {
			musala += peopleInGroup;
		}
		else if (peopleInGroup <= 12) {
			montblanc += peopleInGroup;
		}
		else if (peopleInGroup <= 25) {
			kilimanjaro += peopleInGroup;
		}
		else if (peopleInGroup <= 40) {
			k2 += peopleInGroup;
		}
		else {
			everest += peopleInGroup;
		}
	}

	cout << fixed << setprecision(2);
	cout << (musala * 100.0 / totalPeople) << "%" << endl;
	cout << (montblanc * 100.0 / totalPeople) << "%" << endl;
	cout << (kilimanjaro * 100.0 / totalPeople) << "%" << endl;
	cout << (k2 * 100.0 / totalPeople) << "%" << endl;
	cout << (everest * 100.0 / totalPeople) << "%" << endl;

	return 0;
}
