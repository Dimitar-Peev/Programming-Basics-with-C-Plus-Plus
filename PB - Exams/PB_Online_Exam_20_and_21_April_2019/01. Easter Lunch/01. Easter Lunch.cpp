#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numCozonacs, numEggCartons, kgCookies;
    cin >> numCozonacs >> numEggCartons >> kgCookies;

    const double pricePerCozonac = 3.20;
    const double pricePerEggCarton = 4.35;
    const double pricePerKgCookies = 5.40;
    const double pricePerEggDye = 0.15;

    double totalCozonacCost = numCozonacs * pricePerCozonac;
    double totalEggCartonCost = numEggCartons * pricePerEggCarton;
    double totalCookieCost = kgCookies * pricePerKgCookies;
    double totalEggDyeCost = numEggCartons * 12 * pricePerEggDye;

    double totalCost = totalCozonacCost + totalEggCartonCost + totalCookieCost + totalEggDyeCost;

    cout << fixed << setprecision(2) << totalCost << endl;

    return 0;
}
