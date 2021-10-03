#include <bits/stdc++.h>
using namespace std;

void fun(string str)
{
  int n=str.length();
  if(n>10)
  {
    cout<<str[0]<<n-2<<str[n-1]<<endl;
  }
  else
  {
    cout<<str<<endl;
  }
}

int main() 
{
  int n;
  cin>>n;
  string str;
  for(int i=0;i<n;i++)
  {
    cin>>str;
    fun(str);
  }
}