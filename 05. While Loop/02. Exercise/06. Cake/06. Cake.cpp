#include <iostream>
#include <string>

using namespace std;

int main() {
    int length, width;
    cin >> length >> width;

    int totalPieces = width * length;
    int takenPieces = 0;

    string input;
    cin >> input;
    while ("STOP" != input) {

        int pieces = stoi(input);
        takenPieces += pieces;

        if (takenPieces >= totalPieces) {
            cout << "No more cake left! You need "
                << (takenPieces - totalPieces)
                << " pieces more." << endl;
            return 0;
        }

        cin >> input;
    }

    cout << (totalPieces - takenPieces) << " pieces are left." << endl;

    return 0;
}
