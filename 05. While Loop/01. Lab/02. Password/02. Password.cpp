#include <iostream>

using namespace std;

int main() {
    string username, password, inputPassword;
    cin >> username >> password >> inputPassword;

    while (inputPassword != password) {
        cin >> inputPassword;
    }

    cout << "Welcome " << username << "!" << endl;

    return 0;
}