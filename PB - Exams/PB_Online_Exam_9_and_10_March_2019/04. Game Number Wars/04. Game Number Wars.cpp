#include <iostream>
#include <string>

using namespace std;

int main() {
    string player1, player2;
    cin >> player1 >> player2;

    int points1 = 0, points2 = 0;

    string input;
    while (getline(cin >> ws,  input)) {
        if (input == "End of game") {
            cout << player1 << " has " << points1 << " points" << endl;
            cout << player2 << " has " << points2 << " points" << endl;
            return 0;
        }

        int card1 = stoi(input); 
        int card2;
        cin >> card2;

        if (card1 > card2) {
            points1 += card1 - card2;
        }
        else if (card2 > card1) {
            points2 += card2 - card1;
        }
        else {
            cout << "Number wars!" << endl;
            int warCard1, warCard2;
            cin >> warCard1 >> warCard2;

            if (warCard1 > warCard2) {
                cout << player1 << " is winner with " << points1 << " points" << endl;
            }
            else {
                cout << player2 << " is winner with " << points2 << " points" << endl;
            }

            return 0;
        }
    }

    return 0;
}
