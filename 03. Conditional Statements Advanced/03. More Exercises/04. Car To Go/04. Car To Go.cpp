#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double budget;
    string season;

    cin >> budget >> season;

    string carClass;
    string carType;
    double carPrice = 0.0;

    if (budget <= 100) {
        carClass = "Economy class";
        if (season == "Summer") {
            carType = "Cabrio";
            carPrice = budget * 0.35;
        }
        else if (season == "Winter") {
            carType = "Jeep";
            carPrice = budget * 0.65;
        }
    }
    else if (budget <= 500) {
        carClass = "Compact class";
        if (season == "Summer") {
            carType = "Cabrio";
            carPrice = budget * 0.45;
        }
        else if (season == "Winter") {
            carType = "Jeep";
            carPrice = budget * 0.80;
        }
    }
    else {
        carClass = "Luxury class";
        carType = "Jeep";
        carPrice = budget * 0.90;
    }

    cout << carClass << endl;
    cout << fixed << setprecision(2) << carType << " - " << carPrice << endl;

    return 0;
}
