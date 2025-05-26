#include <iostream>

using namespace std;

int main()
{
	string product;
	cin >> product;

	bool fruit = product == "banana"
		|| product == "apple"
		|| product == "kiwi"
		|| product == "cherry"
		|| product == "lemon"
		|| product == "grapes";

	bool vegetable = product == "tomato"
		|| product == "cucumber"
		|| product == "pepper"
		|| product == "carrot";

	if (fruit) {
		cout << "fruit" << endl;
	}
	else if (vegetable) {
		cout << "vegetable" << endl;
	}
	else {
		cout << "unknown" << endl;
	}

	return 0;
}