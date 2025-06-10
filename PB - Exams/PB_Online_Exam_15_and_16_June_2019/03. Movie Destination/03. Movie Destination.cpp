#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double movieBudget;
    string destination, season;
    int days;

    cin >> movieBudget >> destination >> season >> days;

    double pricePerDay = 0.0;

    if (destination == "Dubai") {
        if (season == "Winter") {
            pricePerDay = 45000;
        }
        else if (season == "Summer") {
            pricePerDay = 40000;
        }

        pricePerDay *= 0.7;
    }
    else if (destination == "Sofia") {
        if (season == "Winter") {
            pricePerDay = 17000;
        }
        else if (season == "Summer") {
            pricePerDay = 12500;
        }

        pricePerDay *= 1.25;
    }
    else if (destination == "London") {
        if (season == "Winter") {
            pricePerDay = 24000;
        }
        else if (season == "Summer") {
            pricePerDay = 20250;
        }
    }

    double totalPrice = pricePerDay * days;

    cout << fixed << setprecision(2);
    if (movieBudget >= totalPrice) {
        cout << "The budget for the movie is enough! We have " 
            << movieBudget - totalPrice << " leva left!" << endl;
    }
    else {
        cout << "The director needs "
            << totalPrice - movieBudget << " leva more!" << endl;
    }

    return 0;
}
