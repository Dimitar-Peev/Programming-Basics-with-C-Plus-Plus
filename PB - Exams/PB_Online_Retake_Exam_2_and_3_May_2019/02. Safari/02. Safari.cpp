#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double budget, fuelLiters;
    string day;

    cin >> budget >> fuelLiters >> day;

    double fuelCost = fuelLiters * 2.10;
    double guideCost = 100.0;
    double totalCost = fuelCost + guideCost;

    if (day == "Saturday") {
        totalCost *= 0.90;
    }
    else if (day == "Sunday") {
        totalCost *= 0.80;
    }

    cout << fixed << setprecision(2);

    if (budget >= totalCost) {
        double moneyLeft = budget - totalCost;
        cout << "Safari time! Money left: " << moneyLeft << " lv." << endl;
    }
    else {
        double needed = totalCost - budget;
        cout << "Not enough money! Money needed: " << needed << " lv." << endl;
    }

    return 0;
}
