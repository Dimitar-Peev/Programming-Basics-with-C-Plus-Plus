#include <iostream>
#include <string>

using namespace std;

int main() {
    int width, length, height;
    cin >> width >> length >> height;

    int freeSpace = width * length * height;
    int totalBoxes = 0;

    string input;
    cin >> input;
    while ("Done" != input) {
  
        int boxes = stoi(input);
        totalBoxes += boxes;

        if (totalBoxes > freeSpace) {
            cout << "No more free space! You need "
                << (totalBoxes - freeSpace)
                << " Cubic meters more." << endl;
            return 0;
        }

        cin >> input;
    }

    cout << (freeSpace - totalBoxes) << " Cubic meters left." << endl;

    return 0;
}
