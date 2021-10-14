#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,r,c,x,temp,steps;
    cin>>r>>c>>steps;
    int a[r][c];
    
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    cin>>a[i][j];
    
    for(i=0;i<min(r,c)/2;i++){
        
        for(j=0; j < steps%(2*(r+c)-i*8-4); j++){
            
            temp=a[i][i];
        
            for(x=i;x<c-i-1;x++)
            a[i][x]=a[i][x+1];
            
            for(x=i;x<r-i-1;x++)
            a[x][c-i-1]=a[x+1][c-i-1];
            
            for(x=c-i-1;x>i;x--)
            a[r-i-1][x]=a[r-i-1][x-1];
            
            for(x=r-i-1;x>i+1;x--)
            a[x][i]=a[x-1][i];
            
            a[i+1][i]=temp;        
        }
    }
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}
