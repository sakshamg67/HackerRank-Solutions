#include <bits/stdc++.h>
using namespace std;

int main(){
	int max ;
	cout<<"Enter max track location ";
	cin>>max;
	int n;
	cout<<"Enter number of tracks ";
	cin>>n;
	int a[n];
	cout<<"Enter their value :";
	for (int i=0; i<n ; i++){
		cin>>a[i];
	}
	int x;
	cout<<"Enter initial value of head";
	cin>>x;
	vector <int> v1;
	vector <int> v2;
	for (int i=0; i<n ; i++){
		if(a[i]>x)
		v1.push_back(a[i]);
		else if(a[i]<x)
		v2.push_back(a[i]);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	int f;
	cout<<"Type 0 if head movement is from left to right and 1 if head movement is from right to left ";
	cin>>f;
	
	int d=0;
	if(f==0){
		d+=v1[v1.size()-1]-x;
	
		if(v2.size()!=0){
			d+=v1[v1.size()-1]-v2[0];
			d+=v2[v2.size()-1]-v2[0];
		}
		
	}
	else {
		d+=x-v2[0];
		if(v1.size()!=0){
			d+=v1[v1.size()-1]-v2[0];
			d+=v1[v1.size()-1]-v1[0];
		}
	}
	cout<<d;
	
	
	
}
