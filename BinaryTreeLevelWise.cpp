#include<bits/stdc++.h>
using namespace std;
template <typename T>
class BinaryTreeNode{
	public:
	T data;
	BinaryTreeNode* left;
	BinaryTreeNode* right;
	BinaryTreeNode(T data){
		this->data=data;
		left=NULL;
		right=NULL;
	}
};
BinaryTreeNode<int>*  takeinput(){
	int n;
	cin>>n;
	if(n==-1){
		return NULL;
	}
	BinaryTreeNode<int>* root=new BinaryTreeNode<int>(n);
	queue<BinaryTreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	while(pendingnodes.size()!=0){
		BinaryTreeNode<int>* front=pendingnodes.front();
		pendingnodes.pop();
		int leftdata;
		cout<<"Enter Left child of "<<front->data<<": ";
		cin>>leftdata;
		if(leftdata!=-1){
			BinaryTreeNode<int>* child=new BinaryTreeNode<int>(leftdata);
			front->left=child;
			pendingnodes.push(child);
		}
		int rightdata;
		cout<<"Enter right child of "<<front->data<<": ";
		cin>>rightdata;
		if(rightdata!=-1){
			BinaryTreeNode<int>* child=new BinaryTreeNode<int>(rightdata);
			front->right=child;
			pendingnodes.push(child);
		}
	}
	return root;
}
void print(BinaryTreeNode<int>* root){
	if(root==NULL){
		return;
	}
	queue<BinaryTreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	while(pendingnodes.size()!=0){
		BinaryTreeNode<int>* front=pendingnodes.front();
		cout<<front->data<<endl;
		pendingnodes.pop();
		if(front->left!=NULL){
			pendingnodes.push(front->left);
		}
		if(front->right!=NULL){
			pendingnodes.push(front->right);
		}
	}
}
int countnodes(BinaryTreeNode<int>* root){
	if(root==NULL){
		return 0;
	}
	return 1+countnodes(root->left)+countnodes(root->right);
}
int search(BinaryTreeNode<int>* root,int n){
	if(root==NULL){
		return 0;
	}
	if(root->data==n){
		return 1;
	}
	int x=0;
	x+=search(root->left,n);
	x+=search(root->right,n);
	//cout<<x<<" ";
	return x;
}
int main(){
	BinaryTreeNode<int>* root=takeinput();
	int x;
	cin>>x;
	//cout<<search(root,x);
	if(search(root,x)>0){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
}