#include <iostream>

using namespace std;

int main() {
    string input;
    cin >> input;

    while ("Stop" != input) {
        cout << input << endl;
        cin >> input;
    }

    return 0;
}