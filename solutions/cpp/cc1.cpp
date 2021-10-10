#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int int64_t
void solve(){
    int ax,bx,cx,ay,by,cy;
    bool reach=0;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    if(ax==bx){
        if((ay<=by) == (by<=cy)){
            reach=true;
        }
    }else if(ay==by){
        if((ax<=bx) ==(bx<=cx)){
            reach=true;
        }
    }else{
        if((ay<=by) == (by<=cy) and cx==bx){
            reach = cx==bx;
        }
        if((ax<=bx) == (bx<=cx) and by==cy){
            reach = by==cy;
        }
    }
    if(reach){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}
signed main(){
ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--)
		solve();
}
