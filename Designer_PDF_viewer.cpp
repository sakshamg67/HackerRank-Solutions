#include<bits/stdc++.h>
using namespace std;

int main(){
  
    int h[26],tall=0;
  
    string str;
  
    for(int i=0; i<26; i++){
        cin>>h[i];
    }
  
    cin>>str;
    int length=str.size();
    
    for(int j=0; j<26; j++){
        tall=max(tall,h[str[j]-'a']);
    }
    
    cout<<length*tall;
    return 0;
}
