#include <iostream>
#include <string>

using namespace std;

int main() {
    int wins = 0, losses = 0, draws = 0;

    for (int i = 0; i < 3; i++) {
        string results;
        cin >> results;
        
        char home = results.at(0);    
        char away = results.at(2);    

        if (home > away) {
            wins++;
        }
        else if (home < away) {
            losses++;
        }
        else {
            draws++;
        }
    }

    cout << "Team won " << wins << " games." << endl;
    cout << "Team lost " << losses << " games." << endl;
    cout << "Drawn games: " << draws << endl;

    return 0;
}
