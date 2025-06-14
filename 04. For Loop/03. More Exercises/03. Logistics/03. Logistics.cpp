#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    int totalTons = 0;
    int minibusTons = 0;
    int truckTons = 0;
    int trainTons = 0;
    double totalCost = 0.0;

    for (int i = 0; i < n; i++) {
        int tons;
        cin >> tons;

        totalTons += tons;

        if (tons <= 3) {
            minibusTons += tons;
            totalCost += tons * 200;
        }
        else if (tons <= 11) {
            truckTons += tons;
            totalCost += tons * 175;
        }
        else {
            trainTons += tons;
            totalCost += tons * 120;
        }
    }

    double averagePricePerTon = totalCost / totalTons;

    cout << fixed << setprecision(2);
    cout << averagePricePerTon << endl;
    cout << (minibusTons * 100.0 / totalTons) << "%" << endl;
    cout << (truckTons * 100.0 / totalTons) << "%" << endl;
    cout << (trainTons * 100.0 / totalTons) << "%" << endl;

    return 0;
}
