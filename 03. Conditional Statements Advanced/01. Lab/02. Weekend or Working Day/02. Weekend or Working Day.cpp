#include <iostream>

using namespace std;

int main() {
	string day;
	cin >> day;

	bool workingDay = day == "Monday"
		|| day == "Tuesday"
		|| day == "Wednesday"
		|| day == "Thursday"
		|| day == "Friday";

	bool weekend = day == "Saturday" || day == "Sunday";

	if (workingDay) {
		cout << "Working day" << endl;
	}
	else if (weekend) {
		cout << "Weekend" << endl;
	}
	else {
		cout << "Error" << endl;
	}

	return 0;
}