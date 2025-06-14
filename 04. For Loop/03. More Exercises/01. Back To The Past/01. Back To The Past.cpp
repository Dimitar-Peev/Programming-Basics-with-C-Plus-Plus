#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double inheritedMoney;
    cin >> inheritedMoney;

    int finalYear;
    cin >> finalYear;

    int age = 18;

    for (int year = 1800; year <= finalYear; ++year) {
        double yearlyExpenses;
        if (year % 2 == 0) {
            yearlyExpenses = 12000;
        }
        else {
            yearlyExpenses = 12000 + 50 * age;
        }

        inheritedMoney -= yearlyExpenses;
        age++;
    }

    cout << fixed << setprecision(2);

    if (inheritedMoney >= 0) {
        cout << "Yes! He will live a carefree life and will have " << inheritedMoney << " dollars left." << endl;
    }
    else {
        cout << "He will need " << -inheritedMoney << " dollars to survive." << endl;
    }

    return 0;
}
