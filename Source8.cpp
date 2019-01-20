#include <iostream>
using namespace std;

// Generic Programming - Ignore 

class Node {
public:
	// Data 
	int data;
	// Pointer to the next Node
	Node * next;
	Node * prev;
	// Construct that makes the ptr to NULL
	Node(int value) {
		next = NULL;
		prev = NULL;
		data = value;
	}
};

class DLL {
public:
	Node * head;
	DLL() {
		head = NULL;
	}
	void insert(int value) {
		// Create a new node
		Node * temp = new Node(value);
		// CHeck if empty list
		if (head == NULL) {
			head = temp;
		}
		else { // If not empty list. 
			Node * current = head;
			while (current->next != NULL)
				current = current->next;
			current->next = temp;
			temp->prev = current;
		}
	}
	void display() {
		Node *current = head;
		Node *last;
		cout << "Print in   order : ";
		while (current != NULL) {
			cout << current->data << "->";
			// Store the current in last (to catch the tail to print in reverse)
			last = current;
			// Move Forward
			current = current->next;
		}
		cout << endl;
		cout << "Print in R order : ";
		while (last != NULL) {
			cout << last->data << "->";
			// Move backwards 
			last = last->prev;
		}
		cout << endl;
	}
	void InsertAt(int value, int pos) {
		// create the new node that should be placed
		Node * temp1 = new Node;
		temp1 = NULL;
		temp1->data = value;
		//mhcbhmgcdc
		if (head == NULL) {
			temp1->next = NULL;
			head = temp1;
			temp1->prev = head;

		}

		else {
			Node* temp2 = head;
			Node* temp3 = NULL;
			int i = 0;
			for (i = 0; i < pos - 1; i++)
			{
				temp2 = temp2->next;
				temp3 = temp2->next;
			}
			temp1->next = temp3;
			temp3->prev = temp1->next;
			temp2->next = temp1;
			temp1->prev = temp2;
		}
		
		}

	}
	void DeleteAt(int pos) {
		// To Do
	}
	void Del() {
		// Deletes the last element.
	}
	void CountItems() {
		// Counts the Number of items.
	}

}

int main() {
	DLL dll1;
	for (int i = 1; i < 11; i++) {
		dll1.insert(i);
	}
	dll1.display();
	dll1.InsertAt(2, 3);
	system("pause");
}