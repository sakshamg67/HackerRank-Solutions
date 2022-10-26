#include<bits/stdc++.h>
using namespace std;
#define int 	int64_t
 
 
void solve(){
	int n;
	cin>>n;
	int tr=0;
	int ans=0;
	for(int i=0;i<n;i++){
	    char c; cin>>c;
	    if(c==')' && tr==0){
	        ans++;
	    }
	    else if(c==')'){
	        tr--;
	    }
	    if(c=='('){
	        tr++;
	    }
	}
	cout<<ans<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--)
		solve();
}
