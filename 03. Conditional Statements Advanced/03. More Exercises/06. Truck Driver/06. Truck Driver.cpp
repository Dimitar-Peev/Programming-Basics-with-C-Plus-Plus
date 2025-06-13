#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string season;
    double kilometersPerMonth;

    cin >> season >> kilometersPerMonth;

    double pricePerKm = 0.0;

    if (season == "Spring" || season == "Autumn") {
        if (kilometersPerMonth <= 5000) {
            pricePerKm = 0.75;
        }
        else if (kilometersPerMonth <= 10000) {
            pricePerKm = 0.95;
        }
        else if (kilometersPerMonth <= 20000) {
            pricePerKm = 1.45;
        }
    }
    else if (season == "Summer") {
        if (kilometersPerMonth <= 5000) {
            pricePerKm = 0.90;
        }
        else if (kilometersPerMonth <= 10000) {
            pricePerKm = 1.10;
        }
        else if (kilometersPerMonth <= 20000) {
            pricePerKm = 1.45;
        }
    }
    else if (season == "Winter") {
        if (kilometersPerMonth <= 5000) {
            pricePerKm = 1.05;
        }
        else if (kilometersPerMonth <= 10000) {
            pricePerKm = 1.25;
        }
        else if (kilometersPerMonth <= 20000) {
            pricePerKm = 1.45;
        }
    }

    double salary = 4 * (kilometersPerMonth * pricePerKm);
    double salaryAfterTax = salary * 0.90;

    cout << fixed << setprecision(2) << salaryAfterTax << endl;

    return 0;
}
