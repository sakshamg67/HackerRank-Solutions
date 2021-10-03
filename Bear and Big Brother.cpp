#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,count=0;
    cin>>a>>b;
    if(a>b)
    {
        cout<<0;
    }
    else
    {
        while(a<=b)
        {
            a=3*a;
            b=2*b;
            count++;
        }
        cout<<count;
    }
    return 0;
}