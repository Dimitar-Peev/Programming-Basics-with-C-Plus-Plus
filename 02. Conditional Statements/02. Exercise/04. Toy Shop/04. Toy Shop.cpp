#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int DISCOUNT_THRESHOLD = 50;

    const double PUZZLE_PRICE = 2.60;
    const double DOLL_PRICE = 3;
    const double TEDDY_BEAR_PRICE = 4.10;
    const double MINION_PRICE = 8.20;
    const double TRUCK_PRICE = 2;

    double excursionPrice;
    cin >> excursionPrice;

    int puzzleCount, dollCount, teddyBearCount, minionCount, truckCount;
    cin >> puzzleCount >> dollCount >> teddyBearCount >> minionCount >> truckCount;

    double totalPrice = (
        (PUZZLE_PRICE * puzzleCount) +
        (DOLL_PRICE * dollCount) +
        (TEDDY_BEAR_PRICE * teddyBearCount) +
        (MINION_PRICE * minionCount) +
        (TRUCK_PRICE * truckCount)
    );
    
    int totalToysCount = (
        puzzleCount +
        dollCount +
        teddyBearCount +
        minionCount +
        truckCount
    );

    if (totalToysCount >= DISCOUNT_THRESHOLD) {
        totalPrice *= 0.75; 
    }

    totalPrice *= 0.90; 

    cout << fixed << setprecision(2);

    double diffMoney = abs(excursionPrice - totalPrice);
    if (totalPrice < excursionPrice) {
        cout << "Not enough money! " << diffMoney << " lv needed." << endl;
    }
    else {
        cout << "Yes! " << diffMoney << " lv left." << endl;
    }

    return 0;
}