#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int kilometers;
    cin >> kilometers;

    string dayTime;
    cin >> dayTime;

    const double taxiStartPrice = 0.70;
    const double taxiDayRate = 0.79;
    const double taxiNightRate = 0.90;
    const double busPrice = 0.09;
    const double trainPrice = 0.06;

    int busMinDistance = 20;
    int trainMinDistance = 100;

    double price = 0.0;

    if (kilometers < busMinDistance) {
        if (dayTime == "day") {
            price = taxiStartPrice + (kilometers * taxiDayRate);
        }
        else if (dayTime == "night") {
            price = taxiStartPrice + (kilometers * taxiNightRate);
        }
    }
    else if (kilometers >= busMinDistance && kilometers < trainMinDistance) {
        price = kilometers * busPrice;
    }
    else {
        price = kilometers * trainPrice;
    }

    cout << fixed << setprecision(2) << price << endl;

    return 0;
}
