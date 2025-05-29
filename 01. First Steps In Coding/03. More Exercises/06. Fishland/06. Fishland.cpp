#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double mackerelPricePerKg, sprinklePricePerKg, bonitoKg, safridKg;
    cin >> mackerelPricePerKg >> sprinklePricePerKg >> bonitoKg >> safridKg;

    int mussels;
    cin >> mussels;

    double bonitoPriceKg = (mackerelPricePerKg * 1.6) * bonitoKg;
    double safridPriceKg = (sprinklePricePerKg * 1.8) * safridKg;
    double musselsPriceKg = mussels * 7.5;

    double totalSum = bonitoPriceKg + safridPriceKg + musselsPriceKg;

    cout << fixed << setprecision(2) << totalSum << endl;

    return 0;
}