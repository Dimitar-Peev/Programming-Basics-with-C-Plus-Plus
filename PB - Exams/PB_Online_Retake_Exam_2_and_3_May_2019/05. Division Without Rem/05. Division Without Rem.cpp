#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    int counterP1 = 0;
    int counterP2 = 0;
    int counterP3 = 0;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num % 2 == 0) {
            counterP1++;
        }
        if (num % 3 == 0) {
            counterP2++;
        }
        if (num % 4 == 0) {
            counterP3++;
        }
    }

    double counterP1percent = (counterP1 * 1.0 / n) * 100;
    double counterP2percent = (counterP2 * 1.0 / n) * 100;
    double counterP3percent = (counterP3 * 1.0 / n) * 100;

    cout << fixed << setprecision(2);
    cout << counterP1percent << "%" << endl;
    cout << counterP2percent << "%" << endl;
    cout << counterP3percent << "%" << endl;

    return 0;
}
