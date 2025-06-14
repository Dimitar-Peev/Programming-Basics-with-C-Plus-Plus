#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int moves;
    cin >> moves;

    double result = 0.0;
    int count0to9 = 0;
    int count10to19 = 0;
    int count20to29 = 0;
    int count30to39 = 0;
    int count40to50 = 0;
    int countInvalid = 0;

    for (int i = 0; i < moves; i++) {
        int number;
        cin >> number;

        if (number >= 0 && number <= 9) {
            result += number * 0.20;
            count0to9++;
        }
        else if (number >= 10 && number <= 19) {
            result += number * 0.30;
            count10to19++;
        }
        else if (number >= 20 && number <= 29) {
            result += number * 0.40;
            count20to29++;
        }
        else if (number >= 30 && number <= 39) {
            result += 50;
            count30to39++;
        }
        else if (number >= 40 && number <= 50) {
            result += 100;
            count40to50++;
        }
        else {
            result /= 2;
            countInvalid++;
        }
    }

    cout << fixed << setprecision(2);
    cout << result << endl;
    cout << "From 0 to 9: " << (count0to9 * 100.0 / moves) << "%" << endl;
    cout << "From 10 to 19: " << (count10to19 * 100.0 / moves) << "%" << endl;
    cout << "From 20 to 29: " << (count20to29 * 100.0 / moves) << "%" << endl;
    cout << "From 30 to 39: " << (count30to39 * 100.0 / moves) << "%" << endl;
    cout << "From 40 to 50: " << (count40to50 * 100.0 / moves) << "%" << endl;
    cout << "Invalid numbers: " << (countInvalid * 100.0 / moves) << "%" << endl;

    return 0;
}
