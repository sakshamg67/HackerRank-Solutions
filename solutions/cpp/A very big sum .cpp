#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i,a,n1, ar[1000],n;
    long sum=0;
    cin>>n;
    n1=n+4;
    a=pow(10,n1);
    
    for (i=0;i<n;i++)
    {
        cin>>ar[i];
        sum=sum +ar[i];
    }
    cout<<sum;
    return 0;
        
}
