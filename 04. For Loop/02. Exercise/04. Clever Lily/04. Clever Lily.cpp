#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int age, toyPrice;
    double washingMachinePrice;

    cin >> age >> washingMachinePrice >> toyPrice;

    const double BROTHER_TAX = 1;
    const double YEAR_MONEY_INCREASE = 10;
    double savedMoney = 0;
    double birthdayMoney = 10;

    for (int currentYear = 1; currentYear <= age; currentYear++) {
        if (currentYear % 2 == 0) {
            savedMoney += birthdayMoney; 
            birthdayMoney += YEAR_MONEY_INCREASE; 
            savedMoney -= BROTHER_TAX;
        }
        else {
            savedMoney += toyPrice;
        }
    }

    cout << fixed << setprecision(2);

    double diff = abs(savedMoney - washingMachinePrice);
    if (savedMoney >= washingMachinePrice) {
        cout << "Yes! " << diff << endl;
    }
    else {
        cout << "No! " << diff << endl;
    }

    return 0;
}