#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int current = 1;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) { 
            if (current > n) {
                return 0;
            }

            cout << current << ' ';
            current++;
        }

        cout << endl;
    }

    return 0;
}
