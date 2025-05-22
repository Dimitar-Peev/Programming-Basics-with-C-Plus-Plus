#include <iostream>
#include <iomanip> // Needed for setprecision

using namespace std;

int main()
{
    const double EXCHANGE_RATE = 1.79549;

    double usd;
    cin >> usd;

    double bgn = usd * EXCHANGE_RATE;
    
    // Option 1
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << bgn << endl;

    // Option 2
    //cout << fixed << setprecision(2) << bgn << endl;

    return 0;
}