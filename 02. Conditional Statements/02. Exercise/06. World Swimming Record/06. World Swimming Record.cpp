#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    const double SECONDS_DELAY = 12.5;
    const double METERS_DELAY_THRESHOLD = 15;

    double worldRecord, distance, timePerMeter;
    cin >> worldRecord >> distance >> timePerMeter;

    double baseTime = distance * timePerMeter;
    double resistanceCount = floor(distance / METERS_DELAY_THRESHOLD);
    double resistanceTime = resistanceCount * SECONDS_DELAY;
    double totalTime = baseTime + resistanceTime;

    cout << fixed << setprecision(2);

    if (totalTime < worldRecord) {
        cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds." << endl;
    }
    else {
        double diff = totalTime - worldRecord;
        cout << "No, he failed! He was " << diff << " seconds slower." << endl;
    }

    return 0;
}
