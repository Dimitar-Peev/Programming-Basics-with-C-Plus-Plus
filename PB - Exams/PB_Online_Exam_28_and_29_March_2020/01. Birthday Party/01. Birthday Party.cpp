#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double rent;
    cin >> rent;

    double cake = rent * 0.2;
    double drinks = cake * 0.55;
    double animator = rent / 3;
    double totalSum = rent + cake + drinks + animator;

    cout << fixed << setprecision(2);
    cout << totalSum << endl;

    return 0;
}
