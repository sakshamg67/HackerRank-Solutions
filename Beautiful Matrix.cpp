#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5],i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                cout<<abs(2-i)+abs(2-j);
            }
        }
    }
    return 0;
}