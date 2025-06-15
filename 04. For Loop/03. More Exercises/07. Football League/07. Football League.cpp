#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int stadiumCapacity, totalFans;
    cin >> stadiumCapacity >> totalFans;

    int countA = 0, countB = 0, countV = 0, countG = 0;

    for (int i = 0; i < totalFans; i++) {
        char sector;
        cin >> sector;

        switch (sector) {
        case 'A': countA++; break;
        case 'B': countB++; break;
        case 'V': countV++; break;
        case 'G': countG++; break;
        }
    }

    cout << fixed << setprecision(2);
    cout << (countA * 100.0 / totalFans) << "%" << endl;
    cout << (countB * 100.0 / totalFans) << "%" << endl;
    cout << (countV * 100.0 / totalFans) << "%" << endl;
    cout << (countG * 100.0 / totalFans) << "%" << endl;
    cout << (totalFans * 100.0 / stadiumCapacity) << "%" << endl;

    return 0;
}
