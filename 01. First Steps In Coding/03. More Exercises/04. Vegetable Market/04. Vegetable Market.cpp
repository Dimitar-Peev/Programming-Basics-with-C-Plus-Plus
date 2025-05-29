#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double priceForKgVegetables, priceForKgFruits;
    cin >> priceForKgVegetables >> priceForKgFruits;

    int totalKilogramsOfVegetables, totalKilogramsOfFruits;
    cin >> totalKilogramsOfVegetables >> totalKilogramsOfFruits;

    double kgVegetables = priceForKgVegetables * totalKilogramsOfVegetables;
    double kgFruits = priceForKgFruits * totalKilogramsOfFruits;
    double sum = kgVegetables + kgFruits;
    double euro = sum * 0.5154639175;

    cout << fixed << setprecision(2) << euro << endl;

    return 0;
}