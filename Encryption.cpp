#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int l=s.length();

    int i,j;

    float l1=sqrt(l);

    int n=ceil(l1);

     for(j=0;j<n;j++)
     {
         for(i=j;i<l;i=i+n)
         cout<<s[i];

         cout<<" ";
     }

    return 0;
}
 
   
   

