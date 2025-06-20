#include <iostream>

using namespace std;

int main() {
    int men, women, tables;
    cin >> men >> women >> tables;

    int counter = 0;

    for (int m = 1; m <= men; m++) {
        for (int w = 1; w <= women; w++) {
            cout << "(" << m << " <-> " << w << ") ";
            counter++;
            if (counter >= tables) {
                return 0;  
            }
        }
    }

    return 0;
}
