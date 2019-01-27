#include <iostream>
using namespace std;

// Generic Programming - Ignore 

class Node {
public:
	// Data 
	int data;
	// Pointer to the next Node
	Node * next;
	// Construct that makes the ptr to NULL
	Node(int value) {
		next = NULL;
		data = value;
	}
};

class CSLL {
public:
	Node * head;
	CSLL() {
		head = NULL;
	}
	// Inserts to the end of the linked list.
	void insert(int value) {

		// Create a new node
		Node * temp = new Node(value);
		// CHeck if empty list
		if (head == NULL) {
			head = temp;
		}
		else { // If not empty list. 
			Node * current = head;
			while (current->next != head)
				current = current->next;
			current->next = temp;
		}
		temp->next = head;
	}
	// Displays the linked list.
	void display() {
		Node * current = head;
		if (current == NULL) {
			cout << "No elements " << endl;
			return;
		}
		while (current->next != head) { // Stopping at head
			cout << current->data << "->";
			current = current->next;
		}
		// Printing the last element
		cout << current->data;
		cout << endl;
	}
	void InsertAt(int value, int pos) {
		// To Do
	}
	void DeleteAt(int pos) {
		// To Do
	}
	void Delet() {
		// Deletes the last element.
	}
	void CountItems() {
		// Counts the Number of items.
	}

};

int main() {
	CSLL csll1;
	for (int i = 1; i < 11; i++) {
		csll1.insert(i);
	}
	//csll1.insert(1);
	csll1.display();
}