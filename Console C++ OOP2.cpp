#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

int main()
{
	Node* head = nullptr; // голова списку
	Node* current = new Node; // поточний вузол

	current = new Node; // створюємо новий вузол
	current->value = 1; // присвоюємо значення
	current->next = nullptr; // наступний вузол відсутній
	head = current; // голова списку вказує на створенний вузол

	current = new Node;
	current->value = 2;
	current->next = head; 
	head = current;      

	current = new Node;
	current->value = 3;
	current->next = head;
	head = current;

	cout << head->value << "\n";
	cout << head->next << "\n";
	cout << head->next->value << "\n";
	cout << head->next->next << "\n";
	cout << head->next->next->value << "\n";
	cout << head->next->next->next << "\n";
}
