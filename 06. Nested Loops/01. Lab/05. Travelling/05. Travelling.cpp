#include <iostream>
#include <string>

using namespace std;

int main() {
    string destination;
    cin >> destination;

    while ("End" != destination) {
        double neededMoney;
        cin >> neededMoney;

        double savedMoney = 0;
        double currentSave;

        while (savedMoney < neededMoney) {
            cin >> currentSave;
            savedMoney += currentSave;
        }

        cout << "Going to " << destination << "!" << endl;

        cin >> destination;
    }

    return 0;
}
