#include <bits/stdc++.h>
using namespace std;

int binary_search(int ranked[],int n,int element){

    int l=0,h=n-1,mid;
    if(element<ranked[h])
    return h+1;
    
    while(l<=h){
        mid=l+(h-l)/2;
        if(ranked[mid]==element)
        return mid;
        
        else if(element<ranked[mid])
        l=mid+1;
        
        else if(element>ranked[mid])
        h=mid-1;
    }
    
    return l;
}

int main(){
    int n,m,i,j;
    cin>>n;
    int ranked[n];
    cin>>ranked[0];
    
    for(i=1;i<n;i++){
        cin>>ranked[i];
        
        if(ranked[i]==ranked[i-1]){
            i--;
            n--;
        }
        
    }
    
    cin>>m;
    int player[m];
    
    for(i=0;i<m;i++){
        
        cin>>player[i];
        cout<<binary_search(ranked, n, player[i])+1<<endl;
        
    }
    
    return 0;
}
