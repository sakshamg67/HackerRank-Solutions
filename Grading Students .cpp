#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,t=0;
    cin>>n;
    
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];      
    }
    for(i=0;i<n;i++)
    {    
        if (arr[i]<38)
             cout<<arr[i]<<endl;
         if (arr[i]>=38)  
         {  
             t=arr[i]%5;
            if (t>=3)
              cout<< (arr[i]-t+5)<<endl; 
            else
            cout<<arr[i]<<endl;
         }
        
       t=0; 
    }
}
