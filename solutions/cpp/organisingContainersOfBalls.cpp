#include <bits/stdc++.h>
/* https://www.hackerrank.com/challenges/organizing-containers-of-balls/problem */
using namespace std;

int main(){
    int q; cin>>q; while(q--){
        int n; cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++)
          for(int j=0;j<n;j++)
            cin>>a[i][j];  
    
        vector<int> v;
        for(int i=0;i<n;i++){
           int sum=0;
           for(int j=0;j<n;j++){
            sum+=a[i][j];
           }
           v.push_back(sum);
        }
        vector<int> b;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=a[j][i];
            }
            b.push_back(sum);
        }
        sort(v.begin(),v.end());
        sort(b.begin(),b.end());
        if(v==b) cout<<"Possible\n";
        else cout<<"Impossible\n";
    }
}
