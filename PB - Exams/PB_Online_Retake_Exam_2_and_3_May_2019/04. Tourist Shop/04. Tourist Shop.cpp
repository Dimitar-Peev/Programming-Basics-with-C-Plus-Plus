#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double budget;
    cin >> budget;

    int productCount = 0;
    double totalSpent = 0.0;

    string productName;
    while (true) {
        getline(cin >> ws, productName);

        if (productName == "Stop") {
            cout << "You bought " << productCount
                << " products for " << fixed << setprecision(2)
                << totalSpent << " leva." << endl;
            break;
        }

        double price;
        cin >> price;
        productCount++;

        if (productCount % 3 == 0) {
            price /= 2;
        }

        if (price > budget) {
            double needed = price - budget;
            cout << "You don't have enough money!" << endl;
            cout << "You need " << fixed << setprecision(2)
                << needed << " leva!" << endl;
            break;
        }
        else {
            budget -= price;
            totalSpent += price;
        }
    }

    return 0;
}
