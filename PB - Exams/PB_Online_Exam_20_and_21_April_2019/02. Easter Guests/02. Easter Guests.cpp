#include <iostream>
#include <cmath>     
#include <iomanip>   

using namespace std;

int main() {
    int numberOfGuests;
    int budget;

    cin >> numberOfGuests >> budget;

    int neededBread = ceil(numberOfGuests / 3.0); 
    int neededEggs = numberOfGuests * 2; 

    const double breadPrice = 4.0;
    const double eggPrice = 0.45;

    double totalCost = neededBread * breadPrice + neededEggs * eggPrice;

    cout << fixed << setprecision(2);

    if (budget >= totalCost) {
        double moneyLeft = budget - totalCost;
        cout << "Lyubo bought " << neededBread << " Easter bread and " << neededEggs << " eggs." << endl;
        cout << "He has " << moneyLeft << " lv. left." << endl;
    }
    else {
        double moneyNeeded = totalCost - budget;
        cout << "Lyubo doesn't have enough money." << endl;
        cout << "He needs " << moneyNeeded << " lv. more." << endl;
    }

    return 0;
}
