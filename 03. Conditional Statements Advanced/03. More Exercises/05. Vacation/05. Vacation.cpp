#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double budget;
    string season;

    cin >> budget >> season;

    string location;
    string place;
    double price = 0.0;

    if (budget <= 1000) {
        location = "Camp";
        if (season == "Summer") {
            place = "Alaska";
            price = budget * 0.65;
        }
        else if (season == "Winter") {
            place = "Morocco";
            price = budget * 0.45;
        }
    }
    else if (budget <= 3000) {
        location = "Hut";
        if (season == "Summer") {
            place = "Alaska";
            price = budget * 0.80;
        }
        else if (season == "Winter") {
            place = "Morocco";
            price = budget * 0.60;
        }
    }
    else {
        location = "Hotel";
        if (season == "Summer") {
            place = "Alaska";
        }
        else if (season == "Winter") {
            place = "Morocco";
        }
        price = budget * 0.90;
    }

    cout << fixed << setprecision(2);
    cout << place << " - " << location << " - " << price << endl;

    return 0;
}
