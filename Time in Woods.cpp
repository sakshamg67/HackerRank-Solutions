#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int h,m;
    cin>>h>>m;
    string arr1[12]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve"};
    string arr2[30]={"one minute","two minutes","three minutes","four minutes","five minutes","six minutes","seven minutes","eight minutes","nine minutes","ten minutes ","eleven minutes","twelve minutes","thirteen minutes","fourteen minutes","quarter","sixteen minutes","seventeen minutes","eighteen minutes","ninteen minutes","twenty minutes","twenty one minutes","twenty two minutes","twenty three minutes","twenty four minutes","twenty five minutes","twenty six minutes","twenty seven minutes","twenty eight minutes","twenty nine minutes","half"};
        if (m<=30 && m!=00)
        {
            cout<<arr2[m-1]<<" past ";
            cout<<arr1[h-1]<<" ";
        
        }
        else if (m>30 && m<=59)
        {
           
            cout<<arr2[59-m]<<" to ";
            cout<<arr1[h]<<" ";
        }
        
        
        if (m==00)
        {
         cout<<arr1[h-1]<<" ";
          cout << "o' clock ";
          
        }
       
       
}
