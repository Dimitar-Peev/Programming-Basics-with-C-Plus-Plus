#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	int restDays;
	cin >> restDays;

	int gameMinutesPerYear = 30000;
	int minutesForGameInWorkingDay = 63;
	int minutesForGameInDayOff = 127;


	int workingDays = 365 - restDays;
	int realGameMinutes = workingDays * minutesForGameInWorkingDay + restDays * minutesForGameInDayOff;
	int hours = abs(gameMinutesPerYear - realGameMinutes) / 60;
	int minutes = abs(gameMinutesPerYear - realGameMinutes) % 60;

	cout << fixed << setprecision(2);

	if (realGameMinutes > gameMinutesPerYear) {
		cout << "Tom will run away" << endl;;
		cout << hours << " hours and " << minutes << " minutes more for play" << endl;
	}
	else {
		cout << "Tom sleeps well" << endl;
		cout << hours << " hours and " << minutes << " minutes less for play" << endl;
	}

	return 0;
}