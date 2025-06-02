#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {
    int tournamentsCount, startingPoints;
    cin >> tournamentsCount >> startingPoints;

    int pointsEarned = 0;
    int tournamentsWon = 0;

    string stage;
    for (int tournament = 0; tournament < tournamentsCount; tournament++) {
        cin >> stage; 

        if (stage == "W") {
            pointsEarned += 2000;
            tournamentsWon++;
        }
        else if (stage == "F") {
            pointsEarned += 1200;
        }
        else if (stage == "SF") {
            pointsEarned += 720;
        }
    }

    int totalPoints = startingPoints + pointsEarned; 
    int averagePoints = pointsEarned / tournamentsCount; 
    double winsPercentage = (static_cast<double>(tournamentsWon) / tournamentsCount) * 100; 

    cout << "Final points: " << totalPoints << endl;
    cout << "Average points: " << averagePoints << endl;
    cout << fixed << setprecision(2) << winsPercentage << "%" << endl;

    return 0;
}