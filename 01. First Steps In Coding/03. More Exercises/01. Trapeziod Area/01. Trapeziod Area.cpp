#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double b1, b2, h;
    cin >> b1 >> b2 >> h;

    double formula = (b1 + b2) * (h / 2);

    cout << fixed << setprecision(2) << formula << endl;

    return 0;
}