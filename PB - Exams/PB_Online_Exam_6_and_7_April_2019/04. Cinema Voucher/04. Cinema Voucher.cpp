#include <iostream>
#include <string>

using namespace std;

int main() {
    int voucherValue;
    cin >> voucherValue;
    cin.ignore();

    int movieCount = 0;
    int otherCount = 0;

    string purchase;
    getline(cin, purchase);

    while (purchase != "End") {

        int price = 0;

        if (purchase.length() > 8) {
            price = int(purchase.at(0)) + int(purchase.at(1));
        }
        else {
            price = int(purchase.at(0));
        }

        if (price > voucherValue) {
            break;
        }

        voucherValue -= price;

        if (purchase.length() > 8) {
            movieCount++;
        }
        else {
            otherCount++;
        }

        getline(cin, purchase);
    }

    cout << movieCount << endl;
    cout << otherCount << endl;

    return 0;
}
