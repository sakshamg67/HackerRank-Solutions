#include <bits/stdc++.h>
using namespace std;
int count (int n1)
{
     int i,h=1;
    for(i=1;i<=n1;i++)
    {
        if(i%2!=0)
        h=h*2;
        else 
        h++;
        
    }
    
return h;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        cout<<count(n)<<endl;
    }
}
