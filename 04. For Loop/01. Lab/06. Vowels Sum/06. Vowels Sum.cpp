#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;
	getline(cin, text);

	int sum = 0;

	int length = text.length();
	for (int i = 0; i < length; i++) {

		char currentChar = text[i];
		switch (currentChar) {
		case 'a': sum += 1; break;
		case 'e': sum += 2; break;
		case 'i': sum += 3; break;
		case 'o': sum += 4; break;
		case 'u': sum += 5; break;
		}
	}

	cout << sum << endl;

	return 0;
}
