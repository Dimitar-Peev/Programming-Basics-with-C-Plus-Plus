#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double strawberriesPrice, banansKg, orangeKg, raspberriesKg, strawberriesKg;
    cin >> strawberriesPrice >> banansKg >> orangeKg >> raspberriesKg >> strawberriesKg;

    double raspberriesPrice = strawberriesPrice / 2;
    double orangePrice = raspberriesPrice * 0.6;
    double banansPrice = raspberriesPrice * 0.2;

    double totalSum = (strawberriesPrice * strawberriesKg)
        + (banansPrice * banansKg)
        + (orangePrice * orangeKg)
        + (raspberriesPrice * raspberriesKg);

    cout << fixed << setprecision(2) << totalSum << endl;

    return 0;
}
