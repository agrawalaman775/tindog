#include <bits/stdc++.h>
using namespace std;

int count(char c, int hash[]){
    return hash[c-97];
}

int main(){
    string s; 
    cin>>s;

    int hash[26]={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]-97]+=1;
    }

    char c;
    cin>>c;
    cout<<count(c,hash);
}