#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstName, lastName, town;
	int age;
	cin >> firstName >> lastName >> age >> town;

	string message = "You are " + firstName + ' ' + lastName + ", a " + to_string(age) + "-years old person from " + town + '.';

	cout << message << endl;
	return 0;
}