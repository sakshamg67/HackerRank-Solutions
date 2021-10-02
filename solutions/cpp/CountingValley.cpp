#include <iostream>

using namespace std;


int main()
{
    int n , count1 =0,  temp=0;
    cin>>n;
    char s[n];
    for(int i=0 ; i<n ; i++)
    {cin>>s[i];}

    for (int i=0 ; i<n ; i++ )
    {  if (s[i]== 'U')
     {count1 ++;}
     if ( s[i] == 'D')
      {count1 --;}
if (count1 == 0 && s[i]=='U')
{temp++;}
       }

 cout<<temp;




}

