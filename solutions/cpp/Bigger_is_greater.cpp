#include <bits/stdc++.h>

using namespace std;

string sortstring(string s,int i,int j)
{
    while(i<j)
    {
        swap(s[i],s[j]);
        i=i+1;
        j=j-1;
    }
return s;
}
string greaterchar(string s, int l)
{
    int i,j;
    char last=s[l-1];
    for(i=l-2;i>=0;i--)
    {
        if(last>s[i])
        break;
        
        last=s[i];
    }
    if(i>=0)
    {
        for(j=l-1;j>i;j--)
        {
            if(s[j]>s[i])
            break;
        }
            swap(s[i],s[j]);
          
         string s1= sortstring(s,i+1,l-1);  
        return s1;
    }
    else {
    return("no answer");
    }
}

int main()
{
    int t; cin>>t;
    for(int i=0;i<t;i++)
    {
        string s; cin>>s;
        int l=s.length();
       string val= greaterchar(s,l);
       cout<<val<<endl;
    }
}
