#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int n;
int minValue = INT_MAX;
int maxValue = INT_MIN;

void dfs(vector<int>& arr, int index, int result, int plus, int minus, int multi, int divide)
{
	if (n == index)
	{
		if (minValue > result) minValue = result;
		if (maxValue < result) maxValue = result;
	}
	
	if (plus > 0) dfs(arr, index + 1, result + arr[index], plus - 1, minus, multi, divide);
	if (minus > 0) dfs(arr, index + 1, result - arr[index], plus, minus - 1, multi, divide);
	if (multi > 0) dfs(arr, index + 1, result * arr[index], plus, minus, multi - 1, divide);
	if (divide > 0) dfs(arr, index + 1, result / arr[index], plus, minus, multi, divide - 1);
}

int main()
{
	ios_base::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);


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

	dfs(arr, 1, arr[0], op[0], op[1], op[2], op[3]);

	cout << maxValue << endl;
	cout << minValue << endl;

	// next_permutation(arr.begin(), arr.end()) 함수를 사용해서 더 간단하게 만들수 있음

	return 0;
}