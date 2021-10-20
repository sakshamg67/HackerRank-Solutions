#include <bits/stdc++.h>

using namespace std;



int main()
{
    int i, n, arr[200];
    float p=0, ne=0, z=0;
    cin >>n;
    for (i=0;i<n;i++)
    {
        cin>>arr[i];   
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]>0)
        p++;
        else if (arr[i]<0)
        ne++;
        else if (arr[i]==0)
        z++;
        
     }
     p=p/n;
     
     ne=ne/n;
     
     z=z/n;
     cout<<p<<endl<<ne<<endl<<z;
     
     return 0;
}
     
    
    
  
