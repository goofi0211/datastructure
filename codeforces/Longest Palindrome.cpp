#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
bool is_palindrome(string s){
    stack<char>st;
    if(s.size()%2==0){
        for(int i=0;i<s.size()/2;i++){
            st.push(s[i]);
        }
        for(int i=s.size()/2;i<s.size();i++){
            if (s[i]!=st.top())
                return false;
            else
                st.pop();
        }
    }
    else{
        for(int i=0;i<s.size()/2;i++){
            st.push(s[i]);
        }
        for(int i=s.size()/2+1;i<s.size();i++){
            if (s[i]!=st.top())
                return false;
            else
                st.pop();
        }
    }
    return true;
}
bool issame(string s){
    char t=s[0];
    for(int i=1;i<s.size();i++)
        if (t!=s[i])
            return false;
    return true;
}
string makep(string s){
    stack<char>st;
    string ch;
    for(int i=0;i<s.size();i++)
        st.push(s[i]);
    while(!st.empty()){
        ch+=st.top();
        st.pop();
    }
    return ch;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,len;
    cin>>n>>len;
    string s;
    set<string>myset;
    int pflag=0;
    int sflag=0,iflag=0;
    int anslen=0;
    for (int i=0;i<n;i++){
        cin>>s;
        if(issame(s)&&iflag==0){
            anslen+=len;
            iflag=1;
        }

        else if (is_palindrome(s)&&pflag==0){
            pflag=1;
            anslen+=len;
        }
        else if (!is_palindrome(s)&&sflag==0){
            if(myset.count(s)){
                anslen+=len*2;
                sflag=1;
            }
            else{
                string temp;
                temp=makep(s);
                myset.insert(temp);
            }

        }

    }
    cout<<anslen;


}
