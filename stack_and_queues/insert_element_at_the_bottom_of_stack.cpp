#include <bits/stdc++.h>
using namespace std;

void printArray_1D(vector<int>&arr) {
	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;
}

void printArray_2D(vector<vector<int>>&arr) {
	for (auto it : arr) {
		for (auto it2 : it) {
			cout << it2 << " ";
		}
		cout << endl;
	}
}
stack<int> insertAtBottom(stack<int> St, int X) {
	stack<int>new_st;
	new_st.push(X);

	vector<int>arr;
	while (St.size() != 0) {
		arr.push_back(St.top());
		St.pop();
	}

	int curr_ptr = arr.size() - 1;
	while (curr_ptr >= 0) {
		new_st.push(arr[curr_ptr]);
		curr_ptr--;
	}
	return new_st;
}
signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}