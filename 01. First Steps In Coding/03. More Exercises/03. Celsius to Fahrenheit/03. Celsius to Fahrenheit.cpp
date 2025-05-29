#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double celsius;
    cin >> celsius;

    double fahrenheit = (celsius * (9.0 / 5)) + 32;

    cout << fixed << setprecision(2) << fahrenheit << endl;

    return 0;
}