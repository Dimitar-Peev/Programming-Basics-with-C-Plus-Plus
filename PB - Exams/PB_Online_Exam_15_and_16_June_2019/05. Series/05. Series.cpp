#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double budget;
    int n;
    cin >> budget >> n;

    double totalPrice = 0;

    for (int i = 0; i < n; ++i) {
        string name;
        getline(cin >> ws, name);

        double price;
        cin >> price;

        if (name == "Thrones") {
            price *= 0.5;
        }
        else if (name == "Lucifer") {
            price *= 0.6;
        }
        else if (name == "Protector") {
            price *= 0.7;
        }
        else if (name == "TotalDrama") {
            price *= 0.8;
        }
        else if (name == "Area") {
            price *= 0.9;
        }

        totalPrice += price;
    }

    cout << fixed << setprecision(2);
    if (budget >= totalPrice) {
        cout << "You bought all the series and left with "
            << (budget - totalPrice) << " lv." << endl;
    }
    else {
        cout << "You need " << (totalPrice - budget)
            << " lv. more to buy the series!" << endl;
    }

    return 0;
}
