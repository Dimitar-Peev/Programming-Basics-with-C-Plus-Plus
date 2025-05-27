#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double PREMIERE = 12.00;
    const double NORMAL = 7.50;
    const double DISCOUNT = 5.00;

    string projectionType;
    cin >> projectionType;

    int rows, columns;
    cin >> rows >> columns;

    int allSeats = rows * columns;
    double totalPrice = 0;

    if (projectionType == "Premiere") {
        totalPrice = allSeats * PREMIERE;
    }
    else if (projectionType == "Normal") {
        totalPrice = allSeats * NORMAL;
    }
    else if (projectionType == "Discount") {
        totalPrice = allSeats * DISCOUNT;
    }

    cout << fixed << setprecision(2) << totalPrice << " leva" << endl;

    return 0;
}