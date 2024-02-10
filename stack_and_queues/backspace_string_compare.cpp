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
bool backspaceCompare(string s, string t) {
	stack<char>st;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '#' && st.size() == 0) {
			continue;
		}
		else if (s[i] == '#') {
			st.pop();
			continue;
		}
		else {
			st.push(s[i]);
		}
	}
	vector<char>arr1;
	while (st.size() != 0) {
		arr1.push_back(st.top());
		st.pop();
	}

	for (int i = 0; i < t.size(); i++) {
		if (t[i] == '#' && st.size() == 0) {
			continue;
		}
		else if (t[i] == '#') {
			st.pop();
			continue;
		}
		else {
			st.push(t[i]);
		}
	}
	vector<char>arr2;
	while (st.size() != 0) {
		arr2.push_back(st.top());
		st.pop();
	}
	return arr1 == arr2;
}
signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}