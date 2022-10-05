#include<iostream>
using namespace std;

class Node
{
public:
int data;
Node *next;	
};
void push(Node ** head_ref,int new_data)
{
	Node *new_node=new Node();
	new_node->data=new_data;
	new_node->next=(*head_ref);
	*head_ref=new_node;
}
void print(Node * first)
{ 
	while(first!=NULL)
	{ 
		cout<<first->data<<"  ";
		first=first->next;
	}
}
int main()  
{  
   Node *head=NULL;
   push(&head,10); 
   print(head);
   cout<<endl;
   push(&head,20);
   print(head);
   cout<<endl;
   push(&head,40);
   push(&head,50);
   print(head);
   //insert(head->Next,30);
   //print(head);
  // append(&head,60);
   //print(head);
}
