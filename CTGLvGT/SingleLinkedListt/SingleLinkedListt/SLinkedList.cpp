#include <iostream>
#include <string>

using namespace std;

struct Node
{
	int data;
	Node* next;
};

int main()
{
	Node* head = new Node();
	head->data = 1;


	head->next = NULL;

	Node* second = new Node();
	second->data = 2;
	second->next = NULL;

	Node* third = new Node();
	third->data = 3;
	third->next = NULL;

	// lien ket cac node lai voi nhau
	head->next = second;
	second->next = third;
	//truy cap
	// phan tu head
	int data = head->data;
	cout << data << endl;

	Node* p = head;
	while (p != NULL)
	{
		data = p->data;
		p = p->next;
		cout << data << "->";
	}

	cout << endl;

	return 0;
}