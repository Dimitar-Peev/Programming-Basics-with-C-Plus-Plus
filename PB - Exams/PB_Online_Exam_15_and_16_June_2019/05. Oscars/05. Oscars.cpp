#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string actorName;
    getline(cin, actorName);

    double startingPoints;
    cin >> startingPoints;

    int judgeCount;
    cin >> judgeCount;

    cin.ignore(); 

    double totalPoints = startingPoints;

    for (int i = 0; i < judgeCount; ++i) {
        string judgeName;
        getline(cin, judgeName);

        double judgePoints;
        cin >> judgePoints;
        cin.ignore(); 

        totalPoints += (judgeName.length() * judgePoints) / 2.0;

        if (totalPoints > 1250.5) {
            cout << fixed << setprecision(1);
            cout << "Congratulations, " << actorName
                << " got a nominee for leading role with "
                << totalPoints << "!" << endl;
            return 0;
        }
    }

    double neededPoints = 1250.5 - totalPoints;
    cout << fixed << setprecision(1);
    cout << "Sorry, " << actorName << " you need " << neededPoints << " more!" << endl;

    return 0;
}
