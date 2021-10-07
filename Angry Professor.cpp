#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k,a,c=0;
    cin>>n;
    for(i=1;i<=n;i++) {      
        
          cin>>k>>a;
          int arr[k];
          for(j=0;j<k;j++)
          {
             cin>>arr[j];      
          }
          c=0;
         for(j=0;j<k;j++)
          {
             if(arr[j]<=0)
               c++;
                  
          }
          if(c<a)
          cout<<"YES"<<endl;
          else 
          cout<<"NO"<<endl;
         
    }
   
    return 0;
}


