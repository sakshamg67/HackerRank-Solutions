#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int main(){
    
    ll n,m,k;
    cin>>n>>m>>k;
    ll c=0;
    for(ll i=n; i<=m; i++){
        int rev= reversDigits(i);
        if(abs(i-rev)%k==0)
        c++;
    }
    
    cout<<c;
    
    
    
    
    
}
