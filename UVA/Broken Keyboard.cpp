#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
string s;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(getline(cin,s)){
            list<string>ls;
            list<string>::iterator it;
            bool H=false,E=false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='['){
                H=true;
                E=false;
                it =ls.begin();
            }
            else if(s[i]==']'){
                E=true;
                H=false;
            }
            else if(H){
                ls.insert(it,string(1,s[i]));
            }
            else
                ls.push_back(string(1,s[i]));
        }

       for (list<string>::iterator i = ls.begin(); i != ls.end(); i++)
            cout <<*i;
       cout<<endl;
    }
}
