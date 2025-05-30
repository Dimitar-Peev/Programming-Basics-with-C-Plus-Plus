#include <iostream>

using namespace std;

int main() {
    const int STEP = 3;

    int endNum;
    cin >> endNum;

    for (int num = 1; num <= endNum; num += STEP) {
        cout << num << endl;
    }

    return 0;
}