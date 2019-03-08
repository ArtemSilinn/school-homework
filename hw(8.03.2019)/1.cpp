#include <iostream>

using namespace std;

struct Node {

	double data;

	Node* next = NULL;

	Node* prev = NULL;

};

class double_stack {

	Node* head;

public:

	double_stack() :head(NULL) {}

	void push(double x) {

		Node* temp = new Node;

		temp->data = x;

		temp->next = head;

		head = temp;

	}

	double pop() {

		if (head == NULL) {

			cout << "Stack is empty";

			return 0;

		}

		Node* temp = head;

		head = head->next;

		double x = temp->data;

		delete temp;

		return x;

	}

	~double_stack() {

		while (head != NULL) {

			Node* temp = head;

			head = head->next;

			delete temp;

		}

	}

};

int main() {

	double_stack A;

	A.push(1.234);

	A.push(4.321);

	A.push(24.7);

	A.push(25.17);

	A.push(80.0);

	A.push(99.2);

	cout << A.pop() << "\n";

	cout << A.pop() << "\n";

	cout << A.pop() << "\n";

	A.push(14.88);

	A.push(2.28);

	A.push(3.14);

	A.push(8.131);

	cout << A.pop() << "\n";

	cout << A.pop() << "\n";

	return 0;

}

