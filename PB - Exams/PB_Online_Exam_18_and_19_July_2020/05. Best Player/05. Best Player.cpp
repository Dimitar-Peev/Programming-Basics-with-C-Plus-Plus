#include <iostream>
#include <string>

using namespace std;

int main() {
    string bestPlayer;
    int maxGoals = 0;

    string input;
    cin >> input;

    while ("END" != input) {

        string player = input;

        int goals;
        cin >> goals;

        if (goals > maxGoals) {
            maxGoals = goals;
            bestPlayer = player;
        }

        if (goals >= 10) {
            break;
        }

        cin >> input;
    }

    cout << bestPlayer << " is the best player!" << endl;

    if (maxGoals >= 3) {
        cout << "He has scored " << maxGoals << " goals and made a hat-trick !!!" << endl;
    }
    else {
        cout << "He has scored " << maxGoals << " goals." << endl;
    }

    return 0;
}
