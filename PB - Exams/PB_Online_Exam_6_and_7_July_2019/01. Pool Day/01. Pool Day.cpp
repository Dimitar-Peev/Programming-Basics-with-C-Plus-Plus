#include <iostream>
#include <cmath>    
#include <iomanip>  

using namespace std;

int main() {
    int people;
    double entranceFee, chairPrice, umbrellaPrice;

    cin >> people >> entranceFee >> chairPrice >> umbrellaPrice;

    double totalEntrance = entranceFee * people;
    double totalChairs = ceil(0.75 * people) * chairPrice;
    double totalUmbrellas = ceil(0.5 * people) * umbrellaPrice;
    double totalSum = totalEntrance + totalChairs + totalUmbrellas;

    cout << fixed << setprecision(2) << totalSum << " lv." << endl;

    return 0;
}
