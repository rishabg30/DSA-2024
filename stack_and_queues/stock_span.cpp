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
vector<int>calculateSpan(int price[], int n) {
	vector<int>ans;
	ans.push_back(1);

	int count = 0;
	stack<pair<int, int>>st;
	st.push({price[0], 1});
	for (int i = 1; i < n; i++) {
		if (price[i] < st.top().first) {
			ans.push_back(1);
			st.push({price[i], 1});
		}
		else {
			count = 1;
			while (st.size() != 0 && price[i] >= st.top().first) {
				count += st.top().second;
				st.pop();
			}
			ans.push_back(count);
			st.push({price[i], count});
		}
	}
	return ans;
}
signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int price[n];
	for (int i = 0; i < n; i++) {
		cin >> price[i];
	}
	vector<int>ans = calculateSpan(price, n);
	printArray_1D(ans);
}