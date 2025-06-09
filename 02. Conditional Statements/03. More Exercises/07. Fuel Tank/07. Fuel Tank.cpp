#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string fuelType;
    int fuelQuantity;

    getline(cin, fuelType);  
    cin >> fuelQuantity;    

    string fuelTypeLower = fuelType;
    if (!fuelTypeLower.empty()) {
        fuelTypeLower[0] = tolower(fuelTypeLower[0]);
    }

    if (fuelType == "Diesel" || fuelType == "Gasoline" || fuelType == "Gas") {
        if (fuelQuantity >= 25) {
            cout << "You have enough " << fuelTypeLower << "." << endl;
        }
        else {
            cout << "Fill your tank with " << fuelTypeLower << "!" << endl;
        }
    }
    else {
        cout << "Invalid fuel!" << endl;
    }

    return 0;
}
