#include <iostream>

using namespace std;

int main() {
	double age;
	cin >> age;

	char gender;
	cin >> gender;

	switch (gender) {
	case 'm':
		if (age >= 16) {
			cout << "Mr." << endl;
		}
		else {
			cout << "Master" << endl;
		}
		break;
	case 'f':
		if (age >= 16) {
			cout << "Ms." << endl;
		}
		else {
			cout << "Miss" << endl;
		}
		break;
	}

	return 0;
}