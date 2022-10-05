#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node *Next;
};
void Push(Node ** head_ref,int new_data)
{
	Node *new_node=new Node();
	new_node->data=new_data;
	new_node->Next=(*head_ref);
	(*head_ref)=new_node;
}
int main()
{
	Node *head=NULL;
	Push(&head,10);
	Push(&head,20);
}
