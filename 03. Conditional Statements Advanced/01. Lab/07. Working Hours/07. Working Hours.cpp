#include <iostream>

using namespace std;

int main() {
	int hour;
	string dayOfTheWeek;

	cin >> hour;
	cin >> dayOfTheWeek;

	bool isClosed = (hour < 10) || (hour > 18) || ("Sunday" == dayOfTheWeek);

	if (isClosed) {
		cout << "closed" << endl;
	}
	else {
		cout << "open" << endl;
	}

	return 0;
}