#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string fuelType;
    getline(cin, fuelType);

    int fuelQuantity;
    cin >> fuelQuantity;

    string clubCard;
    getline(cin >> ws, clubCard);

    double fuelPrice = 0.0;

    if (fuelType == "Gas") {
        fuelPrice = (clubCard == "Yes") ? 0.93 - 0.08 : 0.93;
    }
    else if (fuelType == "Gasoline") {
        fuelPrice = (clubCard == "Yes") ? 2.22 - 0.18 : 2.22;
    }
    else if (fuelType == "Diesel") {
        fuelPrice = (clubCard == "Yes") ? 2.33 - 0.12 : 2.33;
    }

    double totalPrice = fuelPrice * fuelQuantity;

    if (fuelQuantity >= 20 && fuelQuantity <= 25) {
        totalPrice *= 0.92;
    }
    else if (fuelQuantity > 25) {
        totalPrice *= 0.90;
    }

    cout << fixed << setprecision(2) << totalPrice << " lv." << endl;

    return 0;
}
