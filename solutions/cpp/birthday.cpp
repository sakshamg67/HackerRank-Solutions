#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,max=0,c=0;
    cin>>n;
    int arr [n];
     for(i=0;i<n;i++)
     {
         cin>> arr[i];
     }
     max=arr[0];
     for(i=1;i<n;i++)
     {
         if (arr[i]>max)
            max=arr[i];
     }
     for(i=0;i<n;i++)
     {
         if (arr[i]==max)
        c++;
     }
      cout<<c;
     
}
