#include <iostream>

using namespace std;

void func1(int arr[],int size){
    int k;
    for(int i=0,j=size;i<j;i++,j--){
        k=arr[i];
        arr[i]=arr[j-1];
        arr[j-1]=k;
    }
  
}

int main()

{
   int n;
   cin>>n;
   int arr1[n];
   for(int i=0;i<n;i++){
       cin>>arr1[i];
   }
   func1(arr1,n);
   
   for(int i=0;i<n;i++){
       cout<<arr1[i]<<" ";
   }
    return 0;
}
