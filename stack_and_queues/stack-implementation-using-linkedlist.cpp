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
//Create a linkedlist class
class ListNode {
public:
	int data;
	ListNode *next;
	ListNode(int value) {
		data = value;
		next = NULL;
	}
};
class Stack {
	ListNode *top_ptr;
	int size;
public:
	Stack() {
		top_ptr = NULL;
		size = 0;
	}
	void push(int value)  {
		ListNode *newNode = new ListNode(value);
		if (newNode == NULL) {
			cout << "Stack overflow" << endl;
			return;
		}
		newNode->next = top_ptr;
		top_ptr = newNode;
		size++;
	}
	void pop() {
		if (top_ptr == NULL) {
			cout << "Stack underflow" << endl;
			return;
		}
		ListNode *currNode = top_ptr;
		top_ptr = top_ptr->next;
		delete currNode;
		size--;
	}
	int top() {
		if (top_ptr == NULL) {
			cout << "Stack empty" << endl;
			return -1;
		}
		return top_ptr->data;
	}
	bool isEmpty() {
		if (top_ptr == NULL)return true;
		return false;
	}
	int isSize() {
		return size;
	}
};
signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Stack st;
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