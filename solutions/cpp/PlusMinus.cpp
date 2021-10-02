
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int negative=0, zero=0, positive=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>0){
            positive++;
        }
        else if(arr[i]<0){
            negative++;
        }
        else if (arr[i]==0){
            zero++;
        }
    }
    cout<<fixed<<setprecision(6)<<positive/(n*1.0)<<"\n"<<negative/(n*1.0)<<"\n"<<zero/(n*1.0);
    return 0;
}
