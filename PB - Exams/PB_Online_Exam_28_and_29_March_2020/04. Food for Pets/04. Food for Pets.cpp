#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int days;
    double totalFood;

    cin >> days >> totalFood;

    double biscuits = 0.0;
    double dogFood = 0.0;
    double catFood = 0.0;

    for (int i = 1; i <= days; i++) {
        int dog, cat;
        cin >> dog >> cat;

        dogFood += dog;
        catFood += cat;

        if (i % 3 == 0) {
            biscuits += (dog + cat) * 0.1;
        }
    }

    double totalEaten = dogFood + catFood;

    cout << "Total eaten biscuits: " << round(biscuits) << "gr." << endl;
    cout << fixed << setprecision(2);
    cout << (totalEaten / totalFood * 100) << "% of the food has been eaten." << endl;
    cout << (dogFood / totalEaten * 100) << "% eaten from the dog." << endl;
    cout << (catFood / totalEaten * 100) << "% eaten from the cat." << endl;

    return 0;
}
