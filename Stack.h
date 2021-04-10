#include <conio.h>
#include <iostream>
#include <assert.h>

using namespace std;

template <class T> 
class Stack {
public:
	int top;
	size_t length;
	T* data;
void push(const T& value) {
		assert(top < length);
		data[top] = value;
		top++;
	};
	Stack() {
		cout << "¬ведите размер стека: ";
		cin >> length;
		data = new T[length];
		top = 0;
	};
	~Stack() {
		delete[] data;
	};
	void pop() {
		assert(top > 0);
		top--;
	};
	void printStack() {
		for (int i = top-1; i >= 0; i--) {
			cout << data[i] << " ";
		}
		cout << endl << endl;
	};
	void roll(bool direction) {
		if (direction) {
			data[top] = data[0];
			for (int i = 0; i < top; i++) {
				data[i] = data[i + 1];
			};
			data[top-1] = data[top];
		}
		else {
			data[top] = data[top-1];
			for (int i = top - 1; i > 0; i--) {
				data[i] = data[i - 1];
			};
			data[0] = data[top];
		};
	};
};
