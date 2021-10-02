//Have A Good Day Traveller:)
//Author: Saksham Goel
#include<bits/stdc++.h>
#include<queue>
#include<vector>
#define MOD 1000000007
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define int long long int
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x);
using namespace std;
void solve(){
	int n,k,a=0;
	cin>>n;
	vector<int> v(n);
	for(int &i:v)
		cin>>i;
	int count=LLONG_MAX;
	stack<int> s1,s1_gcd,s2,s2_gcd;
	s1.push(0);
	s1_gcd.push(0);
	s2.push(0);
	s2_gcd.push(0);
	for(int i=0;i<n;i++){
		s2.push(v[i]);
		s2_gcd.push(__gcd(s2.top(),s2_gcd.top()));;
		while(a<=i && __gcd(s2_gcd.top(),s1_gcd.top())==1){
		if(s1.size()==1){
			while(s2.size()>1){
				s1.push(s2.top());
				s1_gcd.push(__gcd(s1.top(),s1_gcd.top()));
				s2.pop();
				s2_gcd.pop();
			}
		}
		if(__gcd(s2_gcd.top(),s1_gcd.top())==1)
			count=min(i-a+1,count);
		a++;
		s1.pop();
		s1_gcd.pop();
	}
	//cout<<s2_gcd.top()<<" : "<<s1_gcd.top()<<endl;
	//if(__gcd(s2_gcd.top(),s1_gcd.top())==1)
	}
	if(count==LLONG_MAX)
		count=-1;
	cout<<count<<endl;
}
int32_t main(){
		solve();
	return 0;
}

