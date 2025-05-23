#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int chickenMenus, fishMenus, vegMenus;

    cin >> chickenMenus >> fishMenus >> vegMenus;

    const double chickenPrice = 10.35;
    const double fishPrice = 12.40;
    const double vegPrice = 8.15;
    const double deliveryFee = 2.50;

    double menuTotal = (chickenMenus * chickenPrice) 
        + (fishMenus * fishPrice) 
        + (vegMenus * vegPrice);

    double dessert = menuTotal * 0.20;

    double totalOrder = menuTotal + dessert + deliveryFee;

    cout << fixed << setprecision(2) << totalOrder << endl;

    return 0;
}
