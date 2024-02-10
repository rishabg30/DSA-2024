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
//Function to push all the elements into the stack.
stack<int> _push(int arr[], int n) {
	stack<int>st;

	int minElement = INT_MAX;
	for (int i = 0; i < n; i++) {
		int curr_element = arr[i];
		minElement = min(minElement, curr_element);
		st.push(minElement);
	}
	return st;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s) {
	while (s.size() != 0) {
		cout << s.top() << " ";
		s.pop();
	}
}
signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}