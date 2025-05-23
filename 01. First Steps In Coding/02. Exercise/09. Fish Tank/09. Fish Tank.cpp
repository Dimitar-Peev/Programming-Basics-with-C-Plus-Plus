#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int length, width, height;
    double percent;

    cin >> length >> width >> height >> percent;

    int volumeCm3 = length * width * height;

    double volumeLiters = volumeCm3 * 0.001;

    double usedSpace = percent / 100.0;
    double neededLiters = volumeLiters * (1 - usedSpace);

    cout << fixed << setprecision(6) << neededLiters << endl;

    return 0;
}
