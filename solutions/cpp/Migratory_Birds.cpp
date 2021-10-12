#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;  cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
    cin>>a[i];
    int c1=0,c2=0,c3=0,c4=0,c5=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        c1++;
        else if(a[i]==2)
        c2++;
        else if(a[i]==3)
        c3++;
        else if(a[i]==4)
        c4++;
        else
        c5++;
    }
    int c[5]={c1,c2,c3,c4,c5};
      int max=c[0];
      int j;
    for(int i=1;i<5;i++)
    {
        if(c[i]>max)
        {
        max=c[i];
         j=i+1;
        }
    }
    cout<<j;
}
