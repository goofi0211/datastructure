#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	cin.sync_with_stdio(false), cin.tie(0);
	int T;
	string s;
	cin>>T;
    cin.ignore();
	while(T--){
        bool f=false;
        stack<char>p;
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='[')
                p.push(s[i]);
            else if(s[i]==']'){
                if (p.empty()){
                    f=true;
                    break;
                }
                else{
                    if(p.top()!='['){
                        f=true;
                        break;
                    }
                    else
                        p.pop();
                }
            }
            else if(s[i]==')'){
                if (p.empty()){
                    f=true;
                    break;
                }
                else{
                    if(p.top()!='('){
                        f=true;
                        break;
                    }
                    else
                        p.pop();
                }
            }
        }
        if(!p.empty())
            f=true;
        if(f)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
	}
}
