#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node(int n)
		{
			data=n;
			next=NULL;
		}
};
void print(node *head)
{
   while(head != NULL)
    {
	  cout<<head->data<<" ";
	  head=head->next;
	}	
}
node *takeinput()
{
	int data;
	cin>>data;
	node *head=NULL;
	while(data!=-1)
	{
		node *newnode= new node(data);
		if(head==NULL)
		{
			head=newnode;
		}
		else
		{
			node *temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
		}
		cin>>data;
	}
	return head;
}
void deletenode(node *head,int i)
{
	int count=0,z=0;
	node *temp=head;
	while(count<i-1)
	{
		temp=temp->next;
		count++;
	}
	node *del=temp->next;
	temp->next=del->next;
}
int main()
{
	node *head=takeinput();
	int i;
	cin>>i;
	deletenode(head,i);
	print(head);
	return 0;
}
