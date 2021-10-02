//Have A Good Day Traveller:)
//Author: Saksham Goel
#include<bits/stdc++.h>
#include<queue>
#include<vector>
#define MOD 1000000007
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define int int64_t
#define mp make_pair
#define pb push_back
using namespace std;
vector<int> _parent;
vector<int> _rank;
vector<int> num;
void _create_set(int n){
	_parent=vector<int>(n);
	_rank=vector<int>(n);
	num=vector<int>(n,0);
	for(int i=0;i<n;i++){
		_parent[i]=i;
		_rank[i]=1;
	}
}
int _get(int a){
	if(_parent[a]==a)
		return a;
	return _parent[a]=_get(_parent[a]);
}
void _add(int a,int x){
	int pa=_get(a);
	num[pa]+=x;
}
int _union(int a,int b){
	int pa=_get(a),pb=_get(b);
	if(pa!=pb){
		if(_rank[pa]>_rank[pb])
			swap(pa,pb);
		_parent[pa]=pb;
		num[pa]=num[pa]-num[pb];
		if(_rank[pa]==_rank[pb])
			_rank[pb]+=_rank[pa];
	}
}
void solve(){
	int n,q;
	cin>>n>>q;
	n++;
	_create_set(n);
	while(q--){
		string s1;
		int a,b;
		cin>>s1;
		if(s1=="join"){
			cin>>a>>b;
			_union(a,b);
		}else if(s1=="get"){
			cin>>a;
			int ans=_get(a);
			if(a!=ans)
				cout<<num[ans]+num[a]<<endl;
			else
			cout<<num[ans]<<endl;
		}else{
			cin>>a>>b;
			_add(a,b);
		}
	}
}
signed main(){
	fastio;
//	int t;
//	cin>>t;
//	while(t--)
		solve();
}
