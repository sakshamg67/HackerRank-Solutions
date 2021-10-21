#include<bits/stdc++.h>
using namespace std;

int main(){
  
    long t,a=0;
    cin>>t;
  
    for(int i=1; i<=t; i++){
      
        long long bars,n,c,m;
        cin>>n>>c>>m;
      
        bars = n/c;
        a=bars;
      
     while(bars>=m){
        ++a;
        bars=bars-m+1;
      }
      
    cout<<a<<endl;
      
    }
    
    return 0;
    
}
