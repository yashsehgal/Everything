//https://www.facebook.com/tushar.mahajan.186/posts/1494382877420786
// subscribed by CODE HOUSE (TUSHAR MAHAJAN)


Node *reverseLinkedListRec(Node *head)
{
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* temp = head;
    head = reverseLinkedListRec(head->next);
    Node* temp1 = head;
    while(temp1->next!=NULL){
        temp1=temp1->next;    
    }
    temp1->next=temp;
    temp->next=NULL;
    return head;
}

#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;
#include "solution.h"

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		Node *head = takeinput();
		head = reverseLinkedListRec(head);
		print(head);
	}

	return 0;
}
