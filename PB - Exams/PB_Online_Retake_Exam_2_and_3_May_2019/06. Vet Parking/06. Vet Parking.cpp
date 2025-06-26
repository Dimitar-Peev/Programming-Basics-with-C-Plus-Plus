#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int days, hours;
    cin >> days >> hours;

    double total = 0.0;

    for (int day = 1; day <= days; day++) {
        double dayTotal = 0.0;

        for (int hour = 1; hour <= hours; hour++) {
            if (day % 2 == 0 && hour % 2 != 0) {
                dayTotal += 2.50;
            }
            else if (day % 2 != 0 && hour % 2 == 0) {
                dayTotal += 1.25;
            }
            else {
                dayTotal += 1.00;
            }
        }

        total += dayTotal;
        cout << fixed << setprecision(2);
        cout << "Day: " << day << " - " << dayTotal << " leva" << endl;
    }

    cout << "Total: " << fixed << setprecision(2) << total << " leva" << endl;

    return 0;
}
