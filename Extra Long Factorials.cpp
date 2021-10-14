#include <bits/stdc++.h>
using namespace std;

void extraLongFactorials(int n) {
    int a[1000]={0},i=1,j,len=1,mul,carry=0;
    a[0]=1;
    
    for(i=2;i<=n;i++){
        
        for(j=0;j<len;j++){
            mul=i*a[j]+carry;
            a[j]=mul%10;
            carry=mul/10;
        }
        
        while(carry){
            a[len]=carry%10;
            len++;
            carry/=10;
        }
        
    }
    
    for(i=len-1;i>=0;i--)
    cout<<a[i];

}

int main(){
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    extraLongFactorials(n);
    return 0;
}
