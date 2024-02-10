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
int removeConsecutiveSame(vector<string>v) {
	stack<string>st;
	st.push(v[0]);

	for (int i = 1; i < v.size(); i++) {
		if (st.size() == 0) {
			st.push(v[i]);
			continue;
		}
		string prev_string = st.top();
		if (prev_string == v[i]) {
			st.pop();
			continue;
		}
		else {
			st.push(v[i]);
		}
	}
	return st.size();
}
signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}