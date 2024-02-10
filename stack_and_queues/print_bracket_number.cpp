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
vector<int> bracketNumbers(string S) {
	stack<pair<char, int>>st;

	int open_bracket_number = 0;
	int flag = 1;
	vector<int>ans;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == '(') {
			open_bracket_number++;
			st.push({S[i], open_bracket_number});
			ans.push_back(open_bracket_number);
		}
		else if (S[i] == ')') {
			int close_bracket_number = st.top().second;
			st.pop();
			ans.push_back(close_bracket_number);
		}
		else continue;
	}
	return ans;
}
signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string S; cin >> S;
	vector<int>ans = bracketNumbers(S);
	printArray_1D(ans);
}