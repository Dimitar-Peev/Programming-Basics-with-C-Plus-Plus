#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string topBaker;
    int topPoints = 0;

    for (int i = 0; i < n; i++) {
        string bakerName;
        getline(cin >> ws, bakerName); 

        int sumPoints = 0;
        string input;

        while (true) {
            getline(cin >> ws, input);

            if (input == "Stop") {
                break;
            }

            int points = stoi(input);
            sumPoints += points;
        }

        cout << bakerName << " has " << sumPoints << " points." << endl;

        if (sumPoints > topPoints) {
            topPoints = sumPoints;
            topBaker = bakerName;
            cout << bakerName << " is the new number 1!" << endl;
        }
    }

    cout << topBaker << " won competition with " << topPoints << " points!" << endl;

    return 0;
}
