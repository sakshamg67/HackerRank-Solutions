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
	int n,sum,a,b;
	cin>>n>>sum;
	vector<int> v(n);
	for(int &i:v)
		cin>>i;
	int tsum=0;
	a=0;
	int range=INT_MAX;
	bool flag=0;
	a=0;
	for(int i=0;i<n;i++){
		tsum+=v[i];
		while(a<=i and tsum-v[a]>=sum){
			tsum-=v[a];
			a++;
		}
		if(tsum>=sum)
			range=min(range,i-a+1);
	}
	if(range==INT_MAX)
		cout<<-1;
	else
		cout<<range<<endl;
}
int32_t main(){
	fastio;
//	int t;
//	cin>>t;
//	while(t--)
		solve();
	return 0;
}

