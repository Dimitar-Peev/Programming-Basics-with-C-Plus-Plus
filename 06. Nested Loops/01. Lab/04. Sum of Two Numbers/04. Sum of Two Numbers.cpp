#include <iostream>

using namespace std;

int main() {
    int start, end, magicNumber;
    cin >> start >> end >> magicNumber;

    int combinationCount = 0;

    for (int x = start; x <= end; x++) {
        for (int y = start; y <= end; y++) {
            combinationCount++;
            if (x + y == magicNumber) {
                cout << "Combination N:" << combinationCount << " (" << x << " + " << y << " = " << magicNumber << ")" << endl;
                return 0; 
            }
        }
    }

    cout << combinationCount << " combinations - neither equals " << magicNumber << endl;

    return 0;
}
