#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int count =-1;
    for(int i=0;i<n; i++, count++){
        if(i<n-2 && arr[i+2]==0)
        i++;
    }
    cout<<count<<endl;
    return 0;
}
