#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int prevSum = 0;
    int maxDiff = 0;
    bool firstPair = true;

    for (int i = 0; i < n; i++) {
        int num1, num2;
        cin >> num1 >> num2;

        int currentSum = num1 + num2;

        if (firstPair) {
            prevSum = currentSum;
            firstPair = false;
        }
        else {
            int diff = abs(currentSum - prevSum);
            if (diff > maxDiff) {
                maxDiff = diff;
            }
            prevSum = currentSum;
        }
    }

    if (maxDiff == 0) {
        cout << "Yes, value=" << prevSum << endl;
    }
    else {
        cout << "No, maxdiff=" << maxDiff << endl;
    }

    return 0;
}
