#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    bool hasC = false, hasO = false, hasN = false;
    string word = "";
    string result = "";

    string input;

    while (cin >> input) {
        if (input == "End") break;

        char ch = input[0];

        if (!isalpha(ch)) {
            continue;
        }

        if (ch == 'c' && !hasC) {
            hasC = true;
        }
        else if (ch == 'o' && !hasO) {
            hasO = true;
        }
        else if (ch == 'n' && !hasN) {
            hasN = true;
        }
        else {
            word += ch; 
        }

        if (hasC && hasO && hasN) {
            result += word + " ";
            word = "";
            hasC = hasO = hasN = false;
        }
    }

    cout << result << endl;

    return 0;
}
