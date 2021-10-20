#include<bits/stdc++.h>
using namespace std;
class node{
	public :
		
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
node *takeinput(){
	int data;
	cin>>data;
	node *head=NULL;
	while(data!=-1)
    {
    	node *newnode = new node(data);
    	if(head==NULL)
    	{
    		head = newnode;
		}
		else
		{
			node *temp=head;
			while(temp -> next!= NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
		}
		cin>>data;
	}
	return head;
}
int size(node *head)
{
	if(head==NULL)
	{
		return 0;
	}
	return 1+size(head->next);
}
node *append(node *head,int n)
{
	int z=0;
	while(z<n)
	{
		int x=0;
		node *temp=head;
		node *y=temp;
		while(temp->next!=NULL)
		{
			y=temp;
			temp=temp->next;
		}
		temp->next=head;
		head=y->next;
		y->next=NULL;
		z++;	
	}
	return head;
}
int main()
{	
	node *head=takeinput();
	int n,y;
	cin>>n;
	y=size(head);
	//print(head);
	head=append(head,n);
	print(head);
	return 0;
}
