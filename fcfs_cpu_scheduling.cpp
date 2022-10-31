#include <bits/stdc++.h>
using namespace std;

double  fcfs(vector <pair<int , int>> v){
	sort(v.begin(), v.end());
	int x=v[0].first;
	x+=v[0].second;
	int n= v.size();
	int a[n];
	a[0]=0;
	for (int i=1; i<v.size() ; i++){
		if(x>v[i].first ){
			a[i]=x-v[i].first;
			x+=v[i].second;
		}
		else {
			a[i]=0;
			x=v[i].first+ v[i].second;
		}
	}
	double  s=0;
	for (int i=0; i<n ; i++){
		s+=a[i];
	}
	s=s/n;
	return s;
	
}

int main (){
	int n;
	cout<<"Enter the number of processes ";
	cin>>n;
	cout<<"Enter the arrival time and burst time of each process respectively : ";
	vector <pair<int , int>> v;
	for (int i=0; i<n ; i++){
		int x, y;
		cin>>x>>y;
		v.push_back({x, y});
	}
	
	cout<<"Average waiting time in FCFS is "<<fcfs(v);
}
