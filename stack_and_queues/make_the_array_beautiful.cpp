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
vector<int> makeBeautiful(vector<int> arr) {
	stack<int>st;
	st.push(arr[0]);

	for (int i = 1; i < arr.size(); i++) {
		if (st.size() == 0) {
			st.push(arr[i]);
			continue;
		}
		int prev_element = st.top();
		if ((arr[i] >= 0 && prev_element < 0) || (arr[i] < 0 && prev_element >= 0)) {
			st.pop();
			continue;
		}
		else {
			st.push(arr[i]);
		}
	}
	vector<int>ans;
	while (st.size() != 0) {
		ans.push_back(st.top());
		st.pop();
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
}