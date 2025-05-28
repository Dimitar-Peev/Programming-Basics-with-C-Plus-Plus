#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int examHour, examMinutes; 
    cin >> examHour >> examMinutes;

    int studentHour, studentMinutes;
    cin >> studentHour >> studentMinutes;

    int examTimeInMinutes = examHour * 60 + examMinutes;
    int studentTimeInMinutes = studentHour * 60 + studentMinutes;

    int timeDiff = examTimeInMinutes - studentTimeInMinutes;

    if (timeDiff > 30) {
        cout << "Early" << endl;
    }
    else if (timeDiff < 0) {
        cout << "Late" << endl;
    }
    else {
        cout << "On time" << endl;
    }

    int hours = abs(timeDiff) / 60;
    int minutes = abs(timeDiff) % 60;

    if (hours > 0) {
        cout << hours << ':' << setw(2) << setfill('0') << minutes << " hours ";
    }
    else if (minutes > 0) {
        cout << minutes << " minutes ";
    }

    if (timeDiff > 0) {
        cout << "before the start" << endl;
    }
    else if (timeDiff < 0) {
        cout << "after the start" << endl;
    }

    return 0;
}