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
	int n,sum,a=0,b;
	cin>>n>>sum;
	vector<int> v(n);
	for(int &i:v)
		cin>>i;
	int tsum=0;
	int count=0;
	multiset<int> s;
	multiset<int>::iterator itr1,itr2;
	
	for(int i=0;i<n;i++){
		s.insert(v[i]);
		itr1=s.begin();
		itr2=s.end();
		itr2--;
			//cout<<*itr1<<" "<<*itr2<<endl;
		while(*itr2-*itr1>sum){
			//cout<<*itr1<<" "<<*itr2<<endl;
			s.erase(s.find(v[a]));
			itr1=s.begin();
			itr2=s.end();
			itr2--;
			a++;
		}
	if(a<=i)
	count+=i-a+1;
	}
	cout<<count<<endl;
}
int32_t main(){
	//fastio;
//	int t;
//	cin>>t;
//	while(t--)
		solve();
	return 0;
}

