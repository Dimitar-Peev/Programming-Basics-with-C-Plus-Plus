#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int height, width, percent;
    cin >> height >> width >> percent;

    int totalArea = height * width * 4;

    double areaToPaint = ceil(totalArea * (1 - percent / 100.0)); 

    string input;
    int paintUsed;

    while (getline(cin >> ws, input)) {
        if (input == "Tired!") {
            cout << static_cast<int>(areaToPaint) << " quadratic m left." << endl;
            return 0;
        }

        paintUsed = stoi(input);
        areaToPaint -= paintUsed;

        if (areaToPaint <= 0) {
            int leftover = static_cast<int>(abs(areaToPaint));
            if (leftover == 0) {
                cout << "All walls are painted! Great job, Pesho!" << endl;
            }
            else {
                cout << "All walls are painted and you have " << leftover << " l paint left!" << endl;
            }
            return 0;
        }
    }

    return 0;
}
