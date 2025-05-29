#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double w, h;
    cin >> w >> h;

    double freeSpaceW = floor((w * 100) / 120);
    double freeSpaceH = floor(((h * 100) - 100) / 70);
    double countWorkSpace = (freeSpaceH * freeSpaceW) - 3;

    cout << countWorkSpace << endl;

    return 0;
}