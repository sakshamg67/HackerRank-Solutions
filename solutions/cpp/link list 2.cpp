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
			while(temp -> next= NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
		}
	}
}
int length(node *head,int n)
{
	if(head=NULL)
	{
		return n;
	}
	n++;
	head=head->next;
	length(head,n);
	return n;
}
int main()
{
	node *head=takeinput();
	print(head);
	int n=0;
	int x=length(head,n);
	cout<<x<<endl;
	return 0;
}
