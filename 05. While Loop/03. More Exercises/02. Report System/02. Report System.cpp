#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int targetAmount;
    cin >> targetAmount;

    int paymentCount = 0;

    int cashTotal = 0, cardTotal = 0;
    int cashCount = 0, cardCount = 0;
    int collected = 0;

    string input;

    while (cin >> input) {
        if (input == "End") {
            break;
        }

        int price = stoi(input);
        paymentCount++;

        if (paymentCount % 2 != 0) {
            if (price > 100) {
                cout << "Error in transaction!" << endl;
            }
            else {
                cout << "Product sold!" << endl;
                cashTotal += price;
                cashCount++;
                collected += price;
            }
        }
        else {
            if (price < 10) {
                cout << "Error in transaction!" << endl;
            }
            else {
                cout << "Product sold!" << endl;
                cardTotal += price;
                cardCount++;
                collected += price;
            }
        }

        if (collected >= targetAmount) {
            double avgCash = cashCount == 0 ? 0.0 : static_cast<double>(cashTotal) / cashCount;
            double avgCard = cardCount == 0 ? 0.0 : static_cast<double>(cardTotal) / cardCount;

            cout << fixed << setprecision(2);
            cout << "Average CS: " << avgCash << endl;
            cout << "Average CC: " << avgCard << endl;
            return 0;
        }
    }

    cout << "Failed to collect required money for charity." << endl;

    return 0;
}
