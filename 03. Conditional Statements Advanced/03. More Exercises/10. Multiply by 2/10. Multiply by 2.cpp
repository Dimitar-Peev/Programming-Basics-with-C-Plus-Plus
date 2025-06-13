#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double number;

    while (true) {
        cin >> number;
        if (number >= 0) {
            number *= 2;
            cout << fixed << setprecision(2) << "Result: " << number << endl;
        }
        else {
            cout << "Negative number!" << endl;
            break;
        }
    }

    return 0;
}
