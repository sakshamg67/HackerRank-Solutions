#include<iostream>
using namespace std;




int main(){
    int arr[3];
    for(int i=0; i<3; i++){
        cin>>arr[i];
    }
    
    int brr[3];
    for(int i=0; i<3; i++){
        cin>>brr[i];
    }
    
    int a=0;
    int b=0;
    for(int i=0; i<3; i++){
        if(arr[i]>brr[i]){
            a=a+1;
        }
        else if(arr[i]<brr[i]){
            b=b+1;
        }
    }
    cout<<a<<" "<<b;
 return 0;   
}



