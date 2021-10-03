#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    vector<char> temp;
    for(int i=0;i<s.size();i=i+2)
    {
        int x=int(s[i]);
        temp.push_back(x);
    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i];
        if(i<temp.size()-1)
        {
            cout<<"+";
        }
    }
    return 0;
}