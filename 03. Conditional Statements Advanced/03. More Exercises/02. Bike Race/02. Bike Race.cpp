#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int juniors, seniors;
    string type;

    cin >> juniors >> seniors >> type;

    double juniorsTax = 0.0;
    double seniorsTax = 0.0;

    if (type == "trail") {
        juniorsTax = 5.5;
        seniorsTax = 7;
    }
    else if (type == "cross-country") {
        juniorsTax = 8;
        seniorsTax = 9.5;
    }
    else if (type == "downhill") {
        juniorsTax = 12.25;
        seniorsTax = 13.75;
    }
    else if (type == "road") {
        juniorsTax = 20;
        seniorsTax = 21.5;
    }

    double totalPrice = juniors * juniorsTax + seniors * seniorsTax;
    int totalParticipants = juniors + seniors;

    if (type == "cross-country" && totalParticipants >= 50) {
        totalPrice *= 0.75;
    }

    totalPrice *= 0.95;

    cout << fixed << setprecision(2) << totalPrice << endl;

    return 0;
}
