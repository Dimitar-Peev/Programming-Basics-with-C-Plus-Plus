#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    int studenstWithExcellent = 0;
    int studenstWithVeryGood = 0;
    int studenstWithGood = 0;
    int studenstWithFail = 0;
    double totalGrades = 0.0;

    for (int i = 0; i < n; i++) {
        double grade;
        cin >> grade;

        totalGrades += grade;

        if (grade >= 5.00) {
            studenstWithExcellent++;
        }
        else if (grade >= 4.00) {
            studenstWithVeryGood++;
        }
        else if (grade >= 3.00) {
            studenstWithGood++;
        }
        else {
            studenstWithFail++;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Top students: " << (studenstWithExcellent * 100.0 / n) << "%" << endl;
    cout << "Between 4.00 and 4.99: " << (studenstWithVeryGood * 100.0 / n) << "%" << endl;
    cout << "Between 3.00 and 3.99: " << (studenstWithGood * 100.0 / n) << "%" << endl;
    cout << "Fail: " << (studenstWithFail * 100.0 / n) << "%" << endl;
    cout << "Average: " << (totalGrades / n) << endl;

    return 0;
}
