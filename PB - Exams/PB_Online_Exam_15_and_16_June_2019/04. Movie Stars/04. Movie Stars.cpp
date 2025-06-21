#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double budget;
    cin >> budget;

    string actorName;
    getline(cin >> ws, actorName);

    while (actorName != "ACTION") {
        double salary = 0;

        if (actorName.length() > 15) {
            salary = budget * 0.2;
        }
        else {
            double inputSalary;
            cin >> inputSalary;
            salary = inputSalary;
        }

        budget -= salary;

        if (budget <= 0) {
            break;
        }

        getline(cin >> ws, actorName);
    }

    cout << fixed << setprecision(2);
    if (budget <= 0) {
        cout << "We need " << abs(budget) << " leva for our actors." << endl;
    }
    else {
        cout << "We are left with " << budget << " leva." << endl;
    }

    return 0;
}
