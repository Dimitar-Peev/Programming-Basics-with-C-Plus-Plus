#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    string mostPowerfulWord;
    int maxPower = 0;

    while (true) {
        getline(cin, word);

        if (word == "End of words") {
            break;
        }

        int asciiSum = 0;
        for (char ch : word) {
            asciiSum += (int)ch;
        }

        int wordLength = word.length();
        int power = 0;

        char firstLetter = tolower(word[0]);
        if (firstLetter == 'a' || firstLetter == 'e' || firstLetter == 'i' ||
            firstLetter == 'o' || firstLetter == 'u' || firstLetter == 'y') {
            power = asciiSum * wordLength;
        }
        else {
            power = asciiSum / wordLength; 
        }

        if (power > maxPower) {
            maxPower = power;
            mostPowerfulWord = word;
        }
    }

    cout << "The most powerful word is " << mostPowerfulWord << " - " << maxPower << endl;

    return 0;
}
