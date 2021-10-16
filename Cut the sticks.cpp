#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int m=arr[0];
    int n1=n;
  
    while(n1--)
    {
        int min=1000;
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>0)
           {
               arr[j]-=m;
               c++;
           }
           if(arr[j]>0)
           {
               
               if (min>arr[j])
                min=arr[j];
           }
          
        }
       
          m=min;
          if(c>0)
          cout<<c<<endl;
          
    }
    

}
