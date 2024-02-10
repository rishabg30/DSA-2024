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
int minAddToMakeValid(string s) {
	stack<char>st;
	st.push(s[0]);

	for (int i = 1; i < s.size(); i++) {
		if (s[i] == '(' || st.size() == 0) {
			st.push(s[i]);
			continue;
		}
		else {
			if (s[i] == ')' && st.top() == '(') {
				st.pop();
				continue;
			}
			else {
				st.push(s[i]);
			}
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