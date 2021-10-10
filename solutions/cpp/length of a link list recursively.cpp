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
	int data,x=0;
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
		x++;
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
int main()
{	
	node *head=takeinput();
	int n=0;
	cout<<size(head);
	return 0;
}

