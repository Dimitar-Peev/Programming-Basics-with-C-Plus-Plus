#include <iostream>

using namespace std;

int main() 
{
    const double DOGS_FOOD_PRICE = 2.50;
    const double CAT_FOOD_PRICE = 4;

    int dogsFoodCount, catsFoodCount;
    cin >> dogsFoodCount >> catsFoodCount;

    double totalDogsFoodPrice = dogsFoodCount * DOGS_FOOD_PRICE;
    double totalCatFoodPrice = catsFoodCount * CAT_FOOD_PRICE;
    double totalPrice = totalDogsFoodPrice + totalCatFoodPrice;

    cout << totalPrice << " lv." << endl;;

    return 0;
}