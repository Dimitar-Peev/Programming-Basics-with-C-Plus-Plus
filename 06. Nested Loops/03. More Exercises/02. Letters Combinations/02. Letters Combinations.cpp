#include <iostream>

using namespace std;

int main() {
    char ch1, ch2, ch3;
    cin >> ch1 >> ch2 >> ch3;

    int counter = 0;

    for (char i = ch1; i <= ch2; i++) {
        for (char j = ch1; j <= ch2; j++) {
            for (char k = ch1; k <= ch2; k++) {
                if (i != ch3 && j != ch3 && k != ch3) {
                    cout << i << j << k << " ";
                    counter++;
                }
            }
        }
    }

    cout << counter << endl;

    return 0;
}
