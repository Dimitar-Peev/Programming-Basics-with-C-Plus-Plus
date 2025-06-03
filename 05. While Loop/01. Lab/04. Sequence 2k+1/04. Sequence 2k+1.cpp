#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	// Solution 1
	int num = 1;
	while (num <= n)
	{
		cout << num << endl;
		num = 2 * num + 1;
	}

	// Solution 2
	//for (int i = 1; i <= n; i = i * 2 + 1)
	//{
	//	cout << i << endl;
	//}
}