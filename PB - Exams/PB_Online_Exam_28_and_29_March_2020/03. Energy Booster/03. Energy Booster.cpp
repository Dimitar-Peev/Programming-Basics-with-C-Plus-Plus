#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string fruit;
    string size;
    int sets;

    cin >> fruit >> size >> sets;

    double pricePerSet = 0.0;

    if (size == "small") {
        if (fruit == "Watermelon") {
            pricePerSet = 2 * 56.0;
        }
        else if (fruit == "Mango") {
            pricePerSet = 2 * 36.66;
        }
        else if (fruit == "Pineapple") {
            pricePerSet = 2 * 42.10;
        }
        else if (fruit == "Raspberry") {
            pricePerSet = 2 * 20.0;
        }
    }
    else if (size == "big") {
        if (fruit == "Watermelon") {
            pricePerSet = 5 * 28.70;
        }
        else if (fruit == "Mango") {
            pricePerSet = 5 * 19.60;
        }
        else if (fruit == "Pineapple") {
            pricePerSet = 5 * 24.80;
        }
        else if (fruit == "Raspberry") {
            pricePerSet = 5 * 15.20;
        }
    }

    double totalPrice = pricePerSet * sets;

    if (totalPrice >= 400 && totalPrice <= 1000) {
        totalPrice *= 0.85; 
    }
    else if (totalPrice > 1000) {
        totalPrice *= 0.5; 
    }

    cout << fixed << setprecision(2) << totalPrice << " lv." << endl;

    return 0;
}
