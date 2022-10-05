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
void inbw(Node *prev,int new_data)
{
	Node *new_node=new Node();
	new_node->data=new_data;
	new_node->next=prev->next;
	new_node->prev=prev;
	prev->next=new_node;
	new_node->next->prev=new_node;
//	if(new_node->next!=NULL)

}
void append(Node** head_ref,int new_data)
{
	Node *new_node=new Node();
	Node *last= *head_ref;
	new_node->data=new_data;
	new_node->next=NULL;
	if(*head_ref==NULL)
	{
		new_node->prev=NULL;
		*head_ref=new_node;
	}
	while(last->next!=NULL)
	{
		last=last->next;
	}
	new_node->prev=last;
	last->next=new_node;
}
void print(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
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
	cout<<endl;
	inbw(head,40);
	print(head);
	cout<<endl;
	append(&head,50);
	print(head);
}
