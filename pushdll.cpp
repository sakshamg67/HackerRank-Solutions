#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node *next;
	Node *prev;
};
void push(Node** head_ref,int new_data)
{
	Node *new_node=new Node();
	new_node->data=new_data;
	new_node->next=*head_ref;
	new_node->prev=NULL;
	if(*head_ref!=NULL)
	{
		(*head_ref)->prev=new_node;
	}
	*head_ref=new_node;
}
void print(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data;
		head=head->next;
	}

}
int main()
{
	Node *head=NULL;
	push(&head,10);
	push(&head,20);
	push(&head,30);
	print(head);
}
