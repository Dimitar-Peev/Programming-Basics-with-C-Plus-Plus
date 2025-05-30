#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    getline(cin, text); 

    for (char c : text) {
        cout << c << endl;
    }

    return 0;
}
