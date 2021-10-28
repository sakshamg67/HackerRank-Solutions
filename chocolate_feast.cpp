#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    int arr[t][3];
    for(int i=0; i<t; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<t; i++){
        int chocolate = arr[i][0]/arr[i][1];
        int wrapper = chocolate;
        while(wrapper>=arr[i][2]){
            chocolate += wrapper/arr[i][2];
            wrapper = wrapper/arr[i][2]+wrapper%arr[i][2];
        }
        cout<<chocolate<<endl;
    }

    return 0;
}
