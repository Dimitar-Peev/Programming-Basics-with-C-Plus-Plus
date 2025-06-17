#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int n;
    cin >> n;

    double sum = 0;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        sum += number;
    }

    cout << fixed << setprecision(2) << (sum / n) << endl;

    return 0;
}
