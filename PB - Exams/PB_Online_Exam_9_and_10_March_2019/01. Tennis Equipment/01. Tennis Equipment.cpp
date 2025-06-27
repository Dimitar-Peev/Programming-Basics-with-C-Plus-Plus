#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double priceRacket;
    int countRackets, countShoes;

    cin >> priceRacket >> countRackets >> countShoes;

    double priceShoes = priceRacket / 6.0;
    double totalRackets = priceRacket * countRackets;
    double totalShoes = priceShoes * countShoes;
    double otherEquipment = 0.2 * (totalRackets + totalShoes);

    double totalPrice = totalRackets + totalShoes + otherEquipment;

    int priceDjokovic = floor(totalPrice / 8.0);
    int priceSponsors = ceil(totalPrice * 7.0 / 8.0);

    cout << "Price to be paid by Djokovic " << priceDjokovic << endl;
    cout << "Price to be paid by sponsors " << priceSponsors << endl;

    return 0;
}
