#include <bits/stdc++.h>

using namespace std;



int main(){
    int i,t;
    
    
    cin>>t;
    

    for(int i=0;i<t;i++){
        int n,k,j,x=0;
        cin>>n>>k;
       int arr[n];
       for(j=0;j<n;j++){
           cin>>arr[j];
           if(arr[j]<=0){
               x++;
           }
           
       }
      if(x>=k){
          cout<<"NO"<<endl;
          
      }
      else{
          cout<<"YES"<<endl;
      }  
    }
    return 0;
}
