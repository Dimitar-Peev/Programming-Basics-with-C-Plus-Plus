#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double budget;
    int extras;
    double pricePerOutfit;

    cin >> budget >> extras >> pricePerOutfit;

    double decor = budget * 0.10;
    double clothing = extras * pricePerOutfit;

    if (extras > 150) {
        clothing *= 0.90;
    }

    double totalCost = decor + clothing;

    cout << fixed << setprecision(2);
    if (totalCost > budget) {
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << totalCost - budget << " leva more." << endl;
    }
    else {
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << budget - totalCost << " leva left." << endl;
    }

    return 0;
}
