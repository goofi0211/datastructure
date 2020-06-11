#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int a[1000001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    map<int,vector<int>>dic;
    int n,m;
    while(cin>>n>>m){
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            dic[a[i]].push_back(i+1);
        while(m--){
            int op1,op2;
            cin>>op1>>op2;
            if(dic.count(op2)&&dic[op2].size()>=op1)
                cout<<dic[op2][op1-1]<<endl;
            else
                cout<<0<<endl;
        }
    }



}
