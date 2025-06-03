#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	string name;
	cin >> name;

	int grade = 1;
	int failCount = 0;
	double totalGrades = 0.0;
	int passedYears = 0;

	double yearlyGrade;
	while (grade <= 12) {
		cin >> yearlyGrade;

		if (yearlyGrade >= 4.00) {
			totalGrades += yearlyGrade;
			passedYears++;
			grade++;
		}
		else {
			failCount++;
			if (failCount > 1) {
				cout << name << " has been excluded at " << grade << " grade" << endl;
				return 0;
			}
		}
	}

	double average = totalGrades / passedYears;
	cout << fixed << setprecision(2);
	cout << name << " graduated. Average grade: " << average << endl;

	return 0;
}
