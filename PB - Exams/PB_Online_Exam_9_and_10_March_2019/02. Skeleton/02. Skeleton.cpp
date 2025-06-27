#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

int main() {
    int controlMinutes, controlSeconds;
    double trackLength;
    int secondsPer100m;

    cin >> controlMinutes;
    cin >> controlSeconds;
    cin >> trackLength;
    cin >> secondsPer100m;

    int controlTotalSeconds = controlMinutes * 60 + controlSeconds;

    double totalTime = (trackLength / 100.0) * secondsPer100m;

    double slowdowns = trackLength / 120.0;
    double slowdownSeconds = slowdowns * 2.5;

    double finalTime = totalTime - slowdownSeconds;

    cout << fixed << setprecision(3);

    if (finalTime <= controlTotalSeconds) {
        cout << "Marin Bangiev won an Olympic quota!" << endl;
        cout << "His time is " << finalTime << "." << endl;
    }
    else {
        double difference = finalTime - controlTotalSeconds;
        cout << "No, Marin failed! He was " << difference << " second slower." << endl;
    }

    return 0;
}
