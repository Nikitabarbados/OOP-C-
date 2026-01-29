#include <iostream>
using namespace std;

struct Node {
    int value;
	Node* prev;
	Node* next;

	Node(int value) {
		this->value = value;
		this->prev = nullptr;
		this->next = nullptr;
	}
};

int main()
{
	Node* first = new Node(1);
	Node* second = new Node(2);

	first->next = second;

	Node* third = new Node(3);
	second->next = third;

	Node* four = new Node(4);
	third->next = four;

	Node* newNode = new Node(99);

	
	newNode->next = nullptr;
	newNode->prev = four;
	four->next = newNode;
	four = newNode;

	Node* current = first;
	while (current != nullptr) {
		cout << current->value << " ";
		current = current->next;
	}

}