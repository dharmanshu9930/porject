#include <iostream>
#include <climits>

using namespace std;

class Queue {
	int* arr;
	int size;

	int f = -1;
	int r = -1;

	public:
	Queue (int size) {
		this->size = size;
		arr = new int[size];
	}

	void push(int x) {
		if (f == -1) {
			f = 0;
			r = 0;
		} else if (r == size-1) {
			cout << "Overflow" << endl;
			return;
		} else {
			r++;
		}
		arr[r] = x;
	}

	int front() {
		if (f == -1) {
			cout << "Empty" << endl;
			return INT_MIN;
		}
		return arr[f];
	}

	int back() {
		if (r == -1) {
			cout << "Empty" << endl;
			return INT_MIN;
		}
		return arr[r];
	}

	void pop() {
		if (f == -1) {
			cout << "Underflow" << endl;
			return;
		}
		f++;
	}
	void display() {
		for (int i=f; i<=r; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

int main() {
  int n;
  cin >> n;
 	Queue q(n);
  int x;
  for (int i=0; i<n; i++) {
    cin >> x;
    q.push(x);
  }
 	cout << q.front() << endl;
 	cout << q.back() << endl;
 	q.display();
 	q.pop();
 	q.display();
}
