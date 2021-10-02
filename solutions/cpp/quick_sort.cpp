#include<iostream>
using namespace std;
int partition(int *a, int l, int h)
{
    int index = l;
    int pivot = a[h];
    for(int i=l;i<h;i++)
    {
        if(a[i] <= pivot)
        {
            swap(a[i],a[index]);
            index++;
        }
    }
    swap(a[index],a[h]);
    return index;
}

void quicksort(int *a, int l, int h)
{
    if(l<h)
    {
        int p=partition(a,l,h);
        quicksort(a,l,p-1);
        quicksort(a,p+1,h);
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];

    quicksort(a,0,n-1);
    cout<<"Elements after sorting operation"<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}