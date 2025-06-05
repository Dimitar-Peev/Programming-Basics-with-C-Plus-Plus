#include <iostream>
#include <string>

using namespace std;

int main() {
    double moneyNeeded, availableMoney;
    cin >> moneyNeeded >> availableMoney;

    int days = 0;
    int spendDays = 0;

    string action;
    double amount;

    while (availableMoney < moneyNeeded && spendDays < 5) {
       
        cin >> action >> amount;
        days++;

        if (action == "spend") {
            spendDays++;
            availableMoney -= amount;

            if (availableMoney < 0) {
                availableMoney = 0;
            }
        }
        else if (action == "save") {
            spendDays = 0;
            availableMoney += amount;
        }
    }

    if (spendDays == 5) {
        cout << "You can't save the money." << endl;
        cout << days << endl;
    }
    else {
        cout << "You saved the money for " << days << " days." << endl;
    }

    return 0;
}
