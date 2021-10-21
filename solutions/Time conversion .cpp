#include <bits/stdc++.h>

using namespace std;

int main()
{
    string t="";
    getline(cin,t);
    if (t[8]=='A')
    {
     if (t[0]=='1' && t[1]=='2')
         { 
             t[0]='0';
             t[1]='0';
         }
    
    }
    else if (t[8]=='P')
    {
         if (t[0]=='0'||t[0]!='1'|| t[1]=='1'|| t[1]!='2')
         {
             t[0]+=1;
             t[1]+=2;
         }
        
    }
   t[8]= ' ';
   t[9]= ' '; 
   cout<<t;
   
}

 
