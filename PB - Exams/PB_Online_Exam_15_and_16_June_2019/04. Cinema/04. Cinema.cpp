#include <iostream>
#include <string>

using namespace std;

int main() {
    int capacity;
    cin >> capacity;
    cin.ignore(); 

    string input;
    int totalPeople = 0;
    int income = 0;

    while (true) {
        getline(cin, input);
        if (input == "Movie time!") {
            cout << "There are " << (capacity - totalPeople) << " seats left in the cinema." << endl;
            break;
        }

        int groupSize = stoi(input);

        if (totalPeople + groupSize > capacity) {
            cout << "The cinema is full." << endl;
            break;
        }

        totalPeople += groupSize;

        int price = groupSize * 5;
        if (groupSize % 3 == 0) {
            price -= 5;
        }

        income += price;
    }

    cout << "Cinema income - " << income << " lv." << endl;

    return 0;
}
