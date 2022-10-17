#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"New value of a = "<<a<<endl;
	cout<<"New value of b = "<<b<<endl;
	return 0;
}
