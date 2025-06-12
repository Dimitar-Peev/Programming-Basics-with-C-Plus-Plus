#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    double budget;
    string category;
    int people;

    cin >> budget >> category >> people;

    double restSum = 0.0;

    if (people <= 4) {
        restSum = budget * 0.25;
    }
    else if (people <= 9) {
        restSum = budget * 0.4;
    }
    else if (people <= 24) {
        restSum = budget * 0.5;
    }
    else if (people <= 49) {
        restSum = budget * 0.6;
    }
    else {
        restSum = budget * 0.75;
    }

    if (category == "VIP") {
        restSum -= 499.99 * people;
    }
    else if (category == "Normal") {
        restSum -= 249.99 * people;
    }

    cout << fixed << setprecision(2);
    if (restSum >= 0) {
        cout << "Yes! You have " << restSum << " leva left." << endl;
    }
    else {
        cout << "Not enough money! You need " << fabs(restSum) << " leva." << endl;
    }

    return 0;
}
