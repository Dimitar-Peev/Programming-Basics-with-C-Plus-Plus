#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int guests;
    double pricePerCover, budget;

    cin >> guests >> pricePerCover >> budget;

    if (guests >= 10 && guests <= 15) {
        pricePerCover *= 0.85; 
    }
    else if (guests > 15 && guests <= 20) {
        pricePerCover *= 0.80; 
    }
    else if (guests > 20) {
        pricePerCover *= 0.75; 
    }

    double cakePrice = budget * 0.10;

    double totalCost = guests * pricePerCover + cakePrice;

    cout << fixed << setprecision(2);
    if (budget >= totalCost) {
        cout << "It is party time! " << (budget - totalCost) << " leva left." << endl;
    }
    else {
        cout << "No party! " << (totalCost - budget) << " leva needed." << endl;
    }

    return 0;
}
