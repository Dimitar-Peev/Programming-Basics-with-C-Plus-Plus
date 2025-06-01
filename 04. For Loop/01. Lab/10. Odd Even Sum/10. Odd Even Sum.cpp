#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int evenSum = 0;
    int oddSum = 0;
    int number;

    for (int i = 1; i <= n; i++) {
        cin >> number;
        if (i % 2 == 0) {
            evenSum += number;
        }
        else {
            oddSum += number;
        }
    }

    if (evenSum == oddSum) {
        cout << "Yes" << endl;
        cout << "Sum = " << evenSum << endl;
    }
    else {
        cout << "No" << endl;
        cout << "Diff = " << abs(evenSum - oddSum) << endl;
    }

    return 0;
}
