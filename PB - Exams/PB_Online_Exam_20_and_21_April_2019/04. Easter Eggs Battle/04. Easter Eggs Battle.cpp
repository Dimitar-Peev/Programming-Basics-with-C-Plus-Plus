#include <iostream>
#include <string>

using namespace std;

int main() {
    int countEggsFirst, countEggsSecond;
    cin >> countEggsFirst >> countEggsSecond;

    string winner;
    getline(cin >> ws, winner);

    while (winner != "End") {
        if (winner == "one") {
            countEggsSecond -= 1;
        }
        else if (winner == "two") {
            countEggsFirst -= 1;
        }

        if (countEggsFirst == 0 || countEggsSecond == 0) {
            break;
        }

        getline(cin, winner);
    }

    if (countEggsFirst == 0) {
        cout << "Player one is out of eggs. Player two has "
            << countEggsSecond << " eggs left." << endl;
    }
    else if (countEggsSecond == 0) {
        cout << "Player two is out of eggs. Player one has "
            << countEggsFirst << " eggs left." << endl;
    }
    else {
        cout << "Player one has " << countEggsFirst << " eggs left." << endl;
        cout << "Player two has " << countEggsSecond << " eggs left." << endl;
    }

    return 0;
}
