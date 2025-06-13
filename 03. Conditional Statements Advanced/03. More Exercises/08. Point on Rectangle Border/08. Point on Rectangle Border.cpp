#include <iostream>

using namespace std;

int main() {
    double x1, y1, x2, y2, x, y;
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;

    bool border1 = (x == x1) && (y >= y1) && (y <= y2);
    bool border2 = (x == x2) && (y >= y1) && (y <= y2);
    bool border3 = (y == y1) && (x >= x1) && (x <= x2);
    bool border4 = (y == y2) && (x >= x1) && (x <= x2);

    if (border1 || border2 || border3 || border4) {
        cout << "Border" << endl;
    }
    else {
        cout << "Inside / Outside" << endl;
    }

    return 0;
}
