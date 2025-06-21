#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int minutesPerWalk;
    int countWalks;
    int caloriesPerDay;

    cin >> minutesPerWalk >> countWalks >> caloriesPerDay;

    int totalMinutes = minutesPerWalk * countWalks;
    int totalBurnedCalories = totalMinutes * 5;
    double halfCalories = caloriesPerDay * 0.5;

    if (totalBurnedCalories >= halfCalories) {
        cout << "Yes, the walk for your cat is enough. Burned calories per day: " << totalBurnedCalories << "." << endl;
    }
    else {
        cout << "No, the walk for your cat is not enough. Burned calories per day: " << totalBurnedCalories << "." << endl;
    }

    return 0;
}
