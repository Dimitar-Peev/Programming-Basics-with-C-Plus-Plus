#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    double profitGoal;
    cin >> profitGoal;
    cin.ignore(); 

    string command;
    getline(cin, command);

    double totalSum = 0.0;
    bool goalReached = false;

    while (command != "Party!") {
        string cocktailName = command;

        int countCocktail;
        cin >> countCocktail;
        cin.ignore();  

        int nameLength = cocktailName.length();
        double orderPrice = nameLength * countCocktail;

        if (static_cast<int>(orderPrice) % 2 != 0) {
            orderPrice *= 0.75;
        }

        totalSum += orderPrice;

        if (totalSum >= profitGoal) {
            goalReached = true;
            break; 
        }

        getline(cin, command); 
    }

    double diff = abs(totalSum - profitGoal);

    cout << fixed << setprecision(2);
    if (!goalReached) {
        cout << "We need " << diff << " leva more." << endl;
    }
    else {
        cout << "Target acquired." << endl;
    }

    cout << "Club income - " << totalSum << " leva." << endl;

    return 0;
}
