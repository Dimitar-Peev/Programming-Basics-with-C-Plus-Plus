#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int photoTime, numberOfScenes, sceneDuration;
    cin >> photoTime >> numberOfScenes >> sceneDuration;

    double fieldPreparation = photoTime * 0.15;
    double timeForScenes = numberOfScenes * sceneDuration;
    double totalTime = fieldPreparation + timeForScenes;

    if (totalTime <= photoTime) {
        cout << "You managed to finish the movie on time! You have "
            << round(photoTime - totalTime) << " minutes left!" << endl;
    }
    else {
        cout << "Time is up! To complete the movie you need "
            << round(totalTime - photoTime) << " minutes." << endl;
    }

    return 0;
}
