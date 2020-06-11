#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    string s,t="";
    int j;
    getline(cin,s);
    for(int i=0;i<s.length();i=j+1){
        if(isalpha(s[i])){
            for(j=i;j<s.length()&&isalpha(s[j]);j++);
            cout<<s.substr(i,j-i);
        }
    }




}
