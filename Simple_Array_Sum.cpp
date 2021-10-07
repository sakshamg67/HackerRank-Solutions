#include <iostream>
using namespace std;

int array(int ar[],int a){
    int sum=0;
     for (int i=0;i<a;i++){
      sum+=ar[i];
      
  }
return sum;
    
}

int main() {
    int k;
  cin>>k;
   int arr[k];
   for (int a=0;a<k;a++){
       cin>>arr[a];
  
   }
   cout<<array(arr,k)<<endl;
  
    return 0;
}
