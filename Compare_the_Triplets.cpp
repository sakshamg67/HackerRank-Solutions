#include <iostream>
using namespace std;
 int compare(int arr1[3],int arr2[3]){
    int arr3[2]{0,0};
    if (arr1[0]>arr2[0]){
    arr3[0]+=1;
    }
    else if (arr1[0]==arr2[0]){
        arr3[0]+=0;
        arr3[1]+=0;
    }
    
    else{
    arr3[1]+=1;
    }
    if (arr1[1]>arr2[1]){
    arr3[0]+=1;
    }
     else if (arr1[1]==arr2[1]){
        arr3[0]+=0;
        arr3[1]+=0;
    }
    else{
    arr3[1]+=1;
    }
    if (arr1[2]>arr2[2]){
    arr3[0]+=1;
    }
     else if (arr1[2]==arr2[2]){
        arr3[0]+=0;
        arr3[1]+=0;
    }
    else{
    arr3[1]+=1;
    }
cout<<arr3[0]<<" "<<arr3[1]<<endl;
return 0;
}
int main(){
    int A1[3];
    int A2[3];
    for (int i=0;i<3;i++){
        cin>>A1[i];
    } 
    for (int x=0;x<3;x++){
        cin>>A2[x];
    }
      compare(A1,A2);
    return 0;
}
    
