#include <iostream>

using namespace std;

int main()
{
    const int HOURS_NEEDED_FOR_ONE_PROJECT = 3;

    string architectName;
    cin >> architectName;

    int projectsCount;
    cin >> projectsCount;

    int neededHours = projectsCount * HOURS_NEEDED_FOR_ONE_PROJECT;

    cout
        << "The architect " << architectName <<
        " will need " << neededHours <<
        " hours to complete " << projectsCount << " project/s."
        << endl;

    return 0;
}