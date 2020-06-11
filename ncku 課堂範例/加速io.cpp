#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    int fun[101];
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin>>N;
    while(N--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>fun[i];
        }
        sort(fun,fun+n);
        int m=fun[0];
        for(int i=0;i<n;i++)
            fun[i]-=m;
        bool flag=false;
        for(int i=0;i<n;i++)
            if (fun[i]%2!=0){
                 flag=true;
                 break;
            }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }



}
