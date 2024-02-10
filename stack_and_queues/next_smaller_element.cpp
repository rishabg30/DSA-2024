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
vector<int> nextSmallerElement(vector<int> &arr, int n) {
	vector<int>ans;
	ans.push_back(-1);

	stack<int>st;
	st.push(arr[n - 1]);
	for (int i = n - 2; i >= 0; i--) {
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
	reverse(ans.begin(), ans.end());
	return ans;
}
signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	vector<int>arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	vector<int>ans = nextSmallerElement(arr, n);
	printArray_1D(ans);
}