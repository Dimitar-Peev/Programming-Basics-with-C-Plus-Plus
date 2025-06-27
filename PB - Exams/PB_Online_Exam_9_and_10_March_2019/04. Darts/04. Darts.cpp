#include <iostream>
#include <string>

using namespace std;

int main() {
    string player;
    getline(cin, player);  

    int pointsLeft = 301;
    int successfulShots = 0;
    int unsuccessfulShots = 0;

    string sector;
    while (true) {
        getline(cin, sector);

        if (sector == "Retire") {
            cout << player << " retired after " << unsuccessfulShots << " unsuccessful shots." << endl;
            break;
        }

        int basePoints;
        cin >> basePoints;
        cin.ignore(); 

        int earnedPoints = 0;
        if (sector == "Single") {
            earnedPoints = basePoints;
        }
        else if (sector == "Double") {
            earnedPoints = basePoints * 2;
        }
        else if (sector == "Triple") {
            earnedPoints = basePoints * 3;
        }

        if (earnedPoints <= pointsLeft) {
            pointsLeft -= earnedPoints;
            successfulShots++;
        }
        else {
            unsuccessfulShots++;
        }

        if (pointsLeft == 0) {
            cout << player << " won the leg with " << successfulShots << " shots." << endl;
            break;
        }
    }

    return 0;
}
