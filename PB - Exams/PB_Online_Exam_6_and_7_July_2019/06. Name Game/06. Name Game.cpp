#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    string winner;
    int maxPoints = -1;

    while (true) {
        getline(cin, name);

        if (name == "Stop") {
            break;
        }

        int points = 0;

        for (char ch : name) {
            int inputNumber;
            cin >> inputNumber;

            if (inputNumber == int(ch)) {
                points += 10;
            }
            else {
                points += 2;
            }
        }

        if (points >= maxPoints) {
            maxPoints = points;
            winner = name;
        }

        cin.ignore();
    }

    cout << "The winner is " << winner << " with " << maxPoints << " points!" << endl;

    return 0;
}
