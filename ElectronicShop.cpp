#include <iostream>
using namespace std;

int main()
{
    int b ,n ,m,max;
    cin>>b>>n>>m;
   int  key[n],usb[m];
   for (int i=0 ; i<n ;i ++)
   { 
      cin>> key[i];
   }
   for (int j=0 ; j<m ; j++)
   { 
      cin>> usb[j];
   }
   for (int i=0 ; i <n ; i++)
{

      for (int j=0 ; j<m ; j++ )
      {
          int t=key[i]+usb[j];
          if(t>max and t<= b)
          { max = t;}
      }}
       if (max == 0)
      { cout<<"-1";}
       else
       {cout<<max;}

   


   
}

