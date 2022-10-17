#include <bits/stdc++.h>
using namespace std;
#define int     int64_t
vector<int>v;
void solve(){
    int k=0;
    v.push_back(k);
    int i=1;
    while(v[i-1]+i<10e9){
        v.push_back(v[i-1]+i);
        i++;
    }
    int move,left; cin>>move>>left;
    i=1;
    while(v[i]-(move-i)!=left){
        i++;
    }
    cout<<v[i]-left<<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    /*int t;
    cin>>t;
    while(t--)*/
        solve();
    return 0;
}
