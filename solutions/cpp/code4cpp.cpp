#include <iostream>

using namespace std;
int main()
{
    int n ,  count=0;
    cin>>n;
    int a[n];
    for ( int i=0; i<n ; i++)
    {cin>>a[i];}
    for (int i=0; i<n ; i++)
    {
    for (int j= i+1; j<n ;j++)
    {
        if (a[i]== a[j])
      { count ++;
        
    
    for (int k = j ; k< n-1 ; k ++)
     {a[k] = a[k+1];}
    n--;
    break ;}
    }}
    cout<<count;
}
