#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string seriesName;
    getline(cin, seriesName);

    int episodeDuration, breakDuration;
    cin >> episodeDuration >> breakDuration;

    double lunchTime = breakDuration / 8.0;
    double relaxTime = breakDuration / 4.0;

    double availableTime = breakDuration - lunchTime - relaxTime;

    double diffTime = ceil(abs(availableTime - episodeDuration));
    if (availableTime >= episodeDuration) {
        cout << "You have enough time to watch " << seriesName << " and left with " << diffTime << " minutes free time." << endl;
    }
    else {
        cout << "You don't have enough time to watch " << seriesName << ", you need " << diffTime << " more minutes." << endl;
    }

    return 0;
}
