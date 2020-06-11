#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
set<char>ap;
int main() {
    cin.sync_with_stdio(false), cin.tie(0);
    for(int i='p';i<='z';i++)
        ap.insert(i);
    string s;
    while(cin>>s){
        bool f=false;
        stack<string>st;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='C'||s[i]=='D'||s[i]=='E'||s[i]=='I'){
                if(st.size()<2)
                    f=true;
                else{
                    string temp="";
                    temp+=st.top();
                    st.pop();
                    temp+=st.top();
                    st.pop();
                    st.push(temp);
                }
            }
            else if(s[i]=='N'){
                if(st.size()<1)
                    f=true;
                else{
                    string temp="";
                    temp+=st.top();
                    st.pop();
                    st.push(temp);
                }
            }
            else{
                if(ap.count(s[i]))
                    st.push(string(1,s[i]));
                else
                    f=true;
            }
        }
        if(st.size()!=1)
            f=true;
        if(f)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

}
