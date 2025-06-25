#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int hallRent;
    cin >> hallRent;

    double statues = hallRent * 0.70;
    double catering = statues * 0.85;
    double sound = catering * 0.50;

    double total = hallRent + statues + catering + sound;

    cout << fixed << setprecision(2) << total << endl;

    return 0;
}
