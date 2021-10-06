#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
   int i,j,n,m,a,c1=0,c2=0;
   cin>>n>>m;
   int arr[m],brr[n];
   for(i=0;i<m;i++)
   {
       cin>>arr[i];
   }
   for(i=0;i<n;i++)
   {
       int x,y,min=1000000;
       for(j=0;j<m;j++)
       {
           x=abs(i-arr[j]);
           
           if(x<min)
           {
               min=x;
           }    
       }
       brr[i]=min;
   }
   int max=0;
   for(i=0;i<n;i++)
   {
       
        if (brr[i]>max)
          max=brr[i];   
       
   }
   cout<<max;
}

   

