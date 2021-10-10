#include <iostream>
using namespace std;

class Node{
	public :
		int data;
		Node* next;
		
	Node(int data){
		this -> data= data;
		this -> next = NULL;
	}
};

Node *takeinput(){
	int data;
	cin>>data;
	Node* head = NULL;
	Node * tail= NULL;
	while(data !=-1){
		Node* newNode = new Node(data);
		if(head== NULL){
			head = newNode;
			tail= newNode;
		}
		else {
			tail->next = newNode;
			tail= tail->next;
			
		}
		cin>>data;
	}
	return head;	
}

void print (Node *head){
	while(head!= NULL){
		cout<<head->data<<" ";
		head = head -> next;
	}
	
}
void length(Node * head, int f){
	int count =0;
	while(head!= NULL){
		count++;
		if(count== f){
			cout<<head ->data<<endl;
			break;
		}
		head = head -> next;
	}
	//return count ;
}

int len(Node * head){
	if(head== NULL){ 
		return 0;
	}
	
	return 1 + len(head->next);
}

Node * insertnode (Node * head, int position, int data){
	
	if(head == NULL){
		return head;
	}
	
	if(position ==0){
		Node* newNode = new Node(data);
		newNode ->next= head;
		head = newNode;
		return head;
	}
	else if(position ==1){
		Node* newNode = new Node(data);
		newNode ->next = head ->next;
		head ->next = newNode;
		return head;
		
	}
	
	insertnode (head ->next, position-1, data);
	return head;
	
}

Node * deletenode (Node * head, int position){
	
	if(head == NULL){
		return head;
	}
	
	if(position ==0){
		head = head ->next;
		return head;
	}
	else if(position ==1){
		Node * head2= head ->next;
		head ->next = head2->next;
		return head;
		
	}
	
	deletenode (head ->next, position-1);
	return head;
	
}


int main(){
	Node * head = takeinput();
	/*
	print(head);
	int f;
	cin>>f;
//	int ans = length(head);
//	cout<<endl;
//	cout<<ans;

	length(head, f);
	
	int leng= len(head);
	cout<<leng<<endl;
	
	int position, data;
	cin>>position>>data;
	head = insertnode (head , position, data);
	print (head);
	*/
	int position;
	cin>>position;
	head = deletenode (head , position);
	print (head);
}
