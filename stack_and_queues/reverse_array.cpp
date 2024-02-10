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
void reverseString(vector<char>& s) {
	stack<char>st;
	for (int i = 0; i < s.size(); i++) {
		st.push(s[i]);
	}
	int i = 0;
	while (i < s.size()) {
		s[i] = st.top();
		st.pop();
		i++;
	}
}
signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}