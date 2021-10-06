#include <bits/stdc++.h>

using namespace std;
int main ()
{
    int i,k,tc;
    cin>>tc;
    for(i=0;i<tc;i++)
    { 
        int n,m,s,c=0;
       cin>>n>>m>>s;
       c=(m+s-1)%n;
       if(c==0)
        c=n;
       cout<<c<<endl;
    }
    
    
}
