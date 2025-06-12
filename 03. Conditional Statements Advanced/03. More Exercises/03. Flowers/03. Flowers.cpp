#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int chrysanthemumsCount, rosesCount, tulipsCount;
    string season, holiday;

    cin >> chrysanthemumsCount >> rosesCount >> tulipsCount;
    cin >> season >> holiday;

    double priceChrysanthemums = 0.0;
    double priceRoses = 0.0;
    double priceTulips = 0.0;

    if (season == "Spring" || season == "Summer") {
        priceChrysanthemums = 2.00;
        priceRoses = 4.10;
        priceTulips = 2.50;
    }
    else if (season == "Autumn" || season == "Winter") {
        priceChrysanthemums = 3.75;
        priceRoses = 4.50;
        priceTulips = 4.15;
    }

    double totalPrice = (chrysanthemumsCount * priceChrysanthemums) 
        + (rosesCount * priceRoses) 
        + (tulipsCount * priceTulips);

    if (holiday == "Y") {
        totalPrice *= 1.15;
    }

    if (season == "Spring" && tulipsCount > 7) {
        totalPrice *= 0.95;
    }

    if (season == "Winter" && rosesCount >= 10) {
        totalPrice *= 0.90;
    }

    int totalFlowers = chrysanthemumsCount + rosesCount + tulipsCount;

    if (totalFlowers > 20) {
        totalPrice *= 0.80;
    }

    totalPrice += 2;

    cout << fixed << setprecision(2) << totalPrice << endl;

    return 0;
}
