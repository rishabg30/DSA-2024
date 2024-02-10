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
vector<int> leftSmaller(int n, int arr[]) {
	vector<int>ans;
	ans.push_back(-1);

	stack<int>st;
	st.push(arr[0]);
	for (int i = 1; i < n; i++) {
		if (arr[i] > st.top()) {
			ans.push_back(st.top());
		}
		else {
			while (st.size() != 0 && st.top() >= arr[i]) {
				st.pop();
			}
			if (st.size() == 0) {
				ans.push_back(-1);
			}
			else {
				ans.push_back(st.top());
			}
		}
		st.push(arr[i]);
	}
	return ans;
}
signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}