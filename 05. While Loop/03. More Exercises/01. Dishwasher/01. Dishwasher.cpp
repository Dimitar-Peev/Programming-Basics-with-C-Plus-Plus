#include <iostream>
#include <string>

using namespace std;

int main() {
    int bottles;
    cin >> bottles;

    int detergent = bottles * 750; 
    int loadCount = 0;
    int totalDishes = 0;
    int totalPots = 0;

    string input;

    while (cin >> input) {
        if (input == "End") {
            break;
        }

        int items = stoi(input);
        loadCount++;

        int neededDetergent = 0;

        if (loadCount % 3 == 0) {
            neededDetergent = items * 15;
            totalPots += items;
        }
        else {
            neededDetergent = items * 5;
            totalDishes += items;
        }

        detergent -= neededDetergent;

        if (detergent < 0) {
            cout << "Not enough detergent, " << -detergent << " ml. more necessary!" << endl;
            return 0;
        }
    }

    cout << "Detergent was enough!" << endl;
    cout << totalDishes << " dishes and " << totalPots << " pots were washed." << endl;
    cout << "Leftover detergent " << detergent << " ml." << endl;

    return 0;
}
