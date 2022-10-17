#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,count=0;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        int temp;
        for(int j=i+1;j<n;j++)
        {
        if(a[j]-a[i]==d)
        {
            temp=a[j];
        }
        if(a[j]-temp==d)
        count++;    
        }
    }
    cout<<count;
    return 0;
}

