#include <iostream>

using namespace std;

int main() {
    int period;
    cin >> period;

    int doctors = 7;
    int treated = 0;
    int untreated = 0;

    for (int day = 1; day <= period; day++) {
        int patients;
        cin >> patients;

        if (day % 3 == 0) {
            if (untreated > treated) {
                doctors++;
            }
        }

        if (patients <= doctors) {
            treated += patients;
        }
        else {
            treated += doctors;
            untreated += (patients - doctors);
        }
    }

    cout << "Treated patients: " << treated << "." << endl;
    cout << "Untreated patients: " << untreated << "." << endl;

    return 0;
}
