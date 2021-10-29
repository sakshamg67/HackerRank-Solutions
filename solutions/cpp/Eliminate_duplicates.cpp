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
	cout<<x<<endl;
	return head;
}
void eliminateduplicates(node *head)
{
	node *temp=head;
	node *eliminate=head->next;
	while(eliminate!=NULL)
	{
		if(temp->data==eliminate->data)
		{
			temp->next=eliminate->next;
			eliminate=temp->next;
		}
		else
		{
		temp=temp->next;
		eliminate=temp->next;
	}
	}
	
}
int main()
{	
	node *head=takeinput();
	eliminateduplicates(head);
	print(head);
	return 0;
}
