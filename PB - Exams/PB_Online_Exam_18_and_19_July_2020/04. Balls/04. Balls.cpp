#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    int totalPoints = 0;
    int redCount = 0;
    int orangeCount = 0;
    int yellowCount = 0;
    int whiteCount = 0;
    int blackCount = 0;
    int otherCount = 0;

    for (int i = 0; i < n; i++) {
        string color;
        cin >> color;

        if (color == "red") {
            totalPoints += 5;
            redCount++;
        }
        else if (color == "orange") {
            totalPoints += 10;
            orangeCount++;
        }
        else if (color == "yellow") {
            totalPoints += 15;
            yellowCount++;
        }
        else if (color == "white") {
            totalPoints += 20;
            whiteCount++;
        }
        else if (color == "black") {
            totalPoints /= 2;
            blackCount++;
        }
        else {
            otherCount++;
        }
    }

    cout << "Total points: " << totalPoints << endl;
    cout << "Red balls: " << redCount << endl;
    cout << "Orange balls: " << orangeCount << endl;
    cout << "Yellow balls: " << yellowCount << endl;
    cout << "White balls: " << whiteCount << endl;
    cout << "Other colors picked: " << otherCount << endl;
    cout << "Divides from black balls: " << blackCount << endl;

    return 0;
}
