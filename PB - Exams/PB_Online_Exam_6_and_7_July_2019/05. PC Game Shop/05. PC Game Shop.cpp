#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    int hearthstone = 0;
    int fornite = 0;
    int overwatch = 0;
    int others = 0;

    string game;
    cin.ignore(); 

    for (int i = 0; i < n; i++) {
        getline(cin, game);

        if (game == "Hearthstone") {
            hearthstone++;
        }
        else if (game == "Fornite") {
            fornite++;
        }
        else if (game == "Overwatch") {
            overwatch++;
        }
        else {
            others++;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Hearthstone - " << hearthstone * 100.0 / n << "%" << endl;
    cout << "Fornite - " << fornite * 100.0 / n << "%" << endl;
    cout << "Overwatch - " << overwatch * 100.0 / n << "%" << endl;
    cout << "Others - " << others * 100.0 / n << "%" << endl;

    return 0;
}
