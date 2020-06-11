#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
        string s;
        cin>>s;
        bool flag=false;
        sort(s.begin(),s.end());
        for(int i=0;i<s.size()-1;i++)
            if(s[i]+1!=s[i+1]){
                flag=true;
                break;
            }
        if (flag)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
}
