#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> arr;
	arr.reserve(n);

	for (int i = 0; i < n; i++)
	{
		int value;
		cin >> value;
		arr.push_back(value);
	}

	int op[4];
	// + , -, *, /
	cin >> op[0] >> op[1] >> op[2] >> op[3];


	return 0;
}