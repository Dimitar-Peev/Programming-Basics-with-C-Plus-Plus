#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    char symbol;
    cin >> symbol;

    if (symbol == '+') {
        cout << n1 << " + " << n2 << " = " << n1 + n2 << " - " << ((n1 + n2) % 2 == 0 ? "even" : "odd");
    }
    else if (symbol == '-') {
        cout << n1 << " - " << n2 << " = " << n1 - n2 << " - " << ((n1 - n2) % 2 == 0 ? "even" : "odd");
    }
    else if (symbol == '*') {
        cout << n1 << " * " << n2 << " = " << n1 * n2 << " - " << ((n1 * n2) % 2 == 0 ? "even" : "odd");
    }
    else if (n2 == 0) {
        cout << "Cannot divide " << n1 << " by zero";
    }
    else if (symbol == '/') {
        cout << n1 << " / " << n2 << " = " << fixed << setprecision(2) << static_cast<double>(n1) / n2;
    }
    else if (symbol == '%') {
        cout << n1 << " % " << n2 << " = " << n1 % n2;
    }

    return 0;
}