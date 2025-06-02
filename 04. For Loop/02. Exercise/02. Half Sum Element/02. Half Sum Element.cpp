#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;

    int maxValue = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int currentNumber;
        cin >> currentNumber;

        sum += currentNumber;

        if (currentNumber > maxValue) {
            maxValue = currentNumber;
        }
    }

    sum -= maxValue;

    if (maxValue == sum) {
        cout << "Yes" << endl;
        cout << "Sum = " << sum << endl;
    }
    else {
        int diff = abs(maxValue - sum);
        cout << "No" << endl;
        cout << "Diff = " << diff << endl;
    }

    return 0;
}