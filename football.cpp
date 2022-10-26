#include<bits/stdc++.h>
using namespace std;
#define int 	int64_t
 
void solve(){
    string s;
    cin>>s;
    int count=1;
    char c=s[0];
    for(int i=1;i<s.size();i++){
        if(c==s[i]){
            count++;
        }
        else{
            c=s[i];
            count=1;
        }
        if(count==7){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	/*int t;
	cin>>t;
	while(t--)*/
		solve();
}
