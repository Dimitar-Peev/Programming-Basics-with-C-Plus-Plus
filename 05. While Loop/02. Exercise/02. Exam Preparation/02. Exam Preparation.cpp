#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int UNSATISFACTORY_RATING = 4;

    int maxPoorGrades;
    cin >> maxPoorGrades;

    int poorGrades = 0;
    int problemsCount = 0;
    double totalScore = 0.0;

    string lastProblem;
    string problemName;
    int currentGrade;

    while (true) {
        getline(cin >> ws, problemName);

        if (problemName == "Enough") {
            cout << fixed << setprecision(2);
            cout << "Average score: " << (totalScore / problemsCount) << endl;
            cout << "Number of problems: " << problemsCount << endl;
            cout << "Last problem: " << lastProblem << endl;
            break;
        }

        cin >> currentGrade;

        problemsCount++;
        totalScore += currentGrade;
        lastProblem = problemName;

        if (currentGrade <= UNSATISFACTORY_RATING) {
            poorGrades++;

            if (poorGrades >= maxPoorGrades) {
                cout << "You need a break, " << poorGrades << " poor grades." << endl;
                break;
            }
        }
    }

    return 0;
}
