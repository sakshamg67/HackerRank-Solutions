#include<bits/stdc++.h>
using namespace std;
void binary_search(int arr[], int f, int l, int k)
{
    int m=(f+l)/2;
    while(f<=l)
    {
        if(arr[m]<k)
        {
            f=m+1;
        }
        else if(arr[m]==k)
        {
            cout<<"Found at index "<<m<<endl;
            break;
        }
        else
        {
            l=m-1;
        }
        m=(f+l)/2;
    }
    if(f>l)
    {
        cout<<"Element not found in array"<<endl;
    }
}
int main()
{
    int n,i,k;
    cout<<"Enter the number of elements of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search"<<endl;
    cin>>k;
    binary_search(arr,0,n-1,k);
    return 0;
}

