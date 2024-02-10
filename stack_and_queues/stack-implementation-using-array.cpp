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

//Create a stack class
class Stack {
	int *arr;
	int size;
	int top_ptr;
public:
	Stack(int size) {
		size = size;
		top_ptr = -1;
		arr = new int[size];
	}
	void push(int value) {
		if (size == top_ptr - 1) {
			cout << "Stack overflow" << endl;
			return;
		}
		top_ptr++;
		arr[top_ptr] = value;
	}
	void pop() {
		if (top_ptr == -1) {
			cout << "Stack underflow" << endl;
			return;
		}
		top_ptr--;
	}
	int top() {
		if (top_ptr == -1) {
			cout << "Stack is empty" << endl;
			return -1;
		}
		return arr[top_ptr];
	}
	int isSize() {
		return top_ptr + 1;
	}
	bool isEmpty() {
		if (top_ptr == -1)return true;
		return false;
	}
};
signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Stack st(5);

	st.push(10);
	st.push(20);
	st.push(30);
	cout << st.top() << endl;
	st.pop();
	cout << st.isSize() << endl;

	st.push(40);
	cout << st.isSize() << endl;
	cout << st.isEmpty() << endl;
	st.pop();
	st.pop();
	st.pop();
	cout << st.top() << endl;
}