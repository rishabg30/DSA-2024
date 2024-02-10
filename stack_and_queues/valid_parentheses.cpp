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
bool isValid(string s) {
	stack<char>st;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
			st.push(s[i]);
		}
		else {
			if (s[i] == ')') {
				if (st.size() == 0 || st.top() != '(') {
					return false;
				}
				else {
					st.pop();
					continue;
				}
			}
			else if (s[i] == ']') {
				if (st.size() == 0 || st.top() != '[') {
					return false;
				}
				else {
					st.pop();
					continue;
				}
			}
			else if (s[i] == '}') {
				if (st.size() == 0 || st.top() != '{') {
					return false;
				}
				else {
					st.pop();
					continue;
				}
			}
		}
	}
	if (st.size() == 0)return true;
	return false;
}
signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}