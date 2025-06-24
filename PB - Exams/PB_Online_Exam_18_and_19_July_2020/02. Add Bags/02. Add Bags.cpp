#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double basePrice, bagWeight;
    int daysToTravel, numBags;

    cin >> basePrice >> bagWeight >> daysToTravel >> numBags;

    double finalPrice = 0.0;

    if (bagWeight < 10) {
        finalPrice = basePrice * 0.2;
    }
    else if (bagWeight <= 20) {
        finalPrice = basePrice * 0.5;
    }
    else {
        finalPrice = basePrice;
    }

    if (daysToTravel > 30) {
        finalPrice *= 1.10;
    }
    else if (daysToTravel >= 7) {
        finalPrice *= 1.15;
    }
    else {
        finalPrice *= 1.40;
    }

    double total = finalPrice * numBags;

    cout << fixed << setprecision(2);
    cout << "The total price of bags is: " << total << " lv." << endl;

    return 0;
}
