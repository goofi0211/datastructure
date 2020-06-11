#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        string ans="2";
        int n;

        cin>>n;
        if(n==1){
            cout<<-1<<endl;
            continue;
        }

        for(int i=1;i<n;i++){
            ans+='3';
        }
        cout<<ans<<endl;
    }
}
