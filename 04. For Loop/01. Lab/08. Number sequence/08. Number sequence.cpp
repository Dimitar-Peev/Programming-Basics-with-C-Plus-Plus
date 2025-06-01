#include <iostream>
#include <climits>

using namespace std;

int main() {
    int maxNumber = INT_MIN;
    int minNumber = INT_MAX;

    int n;
    cin >> n;

    int number;

    for (int i = 0; i < n; i++) {
        cin >> number;

        if (number > maxNumber) {
            maxNumber = number;
        }

        if (number < minNumber) {
            minNumber = number;
        }
    }

    cout << "Max number: " << maxNumber << endl;
    cout << "Min number: " << minNumber << endl;

    return 0;
}
