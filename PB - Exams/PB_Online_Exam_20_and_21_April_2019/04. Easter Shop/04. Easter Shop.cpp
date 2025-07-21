#include <iostream>
#include <string>

using namespace std;

int main() {
    int initialEggs;
    cin >> initialEggs;
    cin.ignore(); 

    int currentStock = initialEggs;
    int totalSold = 0;

    string command;
    while (true) {
        getline(cin, command);

        if (command == "Close") {
            cout << "Store is closed!" << endl;
            cout << totalSold << " eggs sold." << endl;
            break;
        }

        int quantity;
        cin >> quantity;
        cin.ignore(); 

        if (command == "Buy") {
            if (quantity > currentStock) {
                cout << "Not enough eggs in store!" << endl;
                cout << "You can buy only " << currentStock << "." << endl;
                break;
            }
            else {
                currentStock -= quantity;
                totalSold += quantity;
            }
        }
        else if (command == "Fill") {
            currentStock += quantity;
        }
    }

    return 0;
}
