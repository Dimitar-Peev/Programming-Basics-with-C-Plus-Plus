#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x, y, h;
    cin >> x >> y >> h;

    double greenArea = 2 * (x * y) - 2 * (1.5 * 1.5) + 2 * (x * x) - 1.2 * 2;
    double greenPaint = greenArea / 3.4;
    double redArea = 2 * (x * y) + 2 * ((x * h) / 2);
    double redPaint = redArea / 4.3;

    cout << fixed << setprecision(2) << greenPaint << endl;
    cout << fixed << setprecision(2) << redPaint << endl;

    return 0;
}