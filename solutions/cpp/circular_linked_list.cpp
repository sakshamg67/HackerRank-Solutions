#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
void insert(Node** head, int data)
{
    Node* node=new Node();
    node->data=data;
    Node* last=*head;
    Node * first = *head;
    if(*head==NULL){
        *head=node;
        return;
    }
    while(last->next!=NULL)
        last=last->next;

  last->next=node;
  node->next = first;

  return;
}
void print(Node* node)
{
    Node * first = node->next;
    do{
        cout<<first->data<<" ";
        node=first->next;
    } while(first -> next != first);

}
int main()
{
    Node* root=NULL;
    int n,a;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        insert(&root,a);
    }
    cout<<"Elements in the linked list"<<endl;
    print(root);
}