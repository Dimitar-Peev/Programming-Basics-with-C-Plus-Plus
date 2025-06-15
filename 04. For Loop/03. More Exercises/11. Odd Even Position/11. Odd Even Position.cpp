#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int n;
    cin >> n;

    double oddSum = 0.0;
    double oddMin = numeric_limits<double>::max();
    double oddMax = numeric_limits<double>::lowest();

    double evenSum = 0.0;
    double evenMin = numeric_limits<double>::max();
    double evenMax = numeric_limits<double>::lowest();

    for (int i = 1; i <= n; ++i) {
        double num;
        cin >> num;

        if (i % 2 != 0) {
            oddSum += num;
            if (num < oddMin) oddMin = num;
            if (num > oddMax) oddMax = num;
        }
        else {
            evenSum += num;
            if (num < evenMin) evenMin = num;
            if (num > evenMax) evenMax = num;
        }
    }

    cout << fixed << setprecision(2);

    cout << "OddSum=" << oddSum << "," << endl;

    if (oddMin == numeric_limits<double>::max()) {
        cout << "OddMin=No," << endl;
    }
    else {
        cout << "OddMin=" << oddMin << "," << endl;
    }

    if (oddMax == numeric_limits<double>::lowest()) {
        cout << "OddMax=No," << endl;
    }
    else {
        cout << "OddMax=" << oddMax << "," << endl;
    }

    cout << "EvenSum=" << evenSum << "," << endl;

    if (evenMin == numeric_limits<double>::max()) {
        cout << "EvenMin=No," << endl;
    }
    else {
        cout << "EvenMin=" << evenMin << "," << endl;
    }

    if (evenMax == numeric_limits<double>::lowest()) {
        cout << "EvenMax=No" << endl;
    }
    else {
        cout << "EvenMax=" << evenMax << endl;
    }

    return 0;
}
