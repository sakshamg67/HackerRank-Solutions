#include<bits/stdc++.h>
using namespace std;
#define int 	int64_t
 
void solve(){
    int n;
    cin>>n;
    int ans=0;
    int count =1;
    while(n--){
        count*=2;
        ans += count;
    }
    cout<<ans<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	/*int t;
	cin>>t;
	while(t--)*/
		solve();
}
