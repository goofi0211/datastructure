#include<bits/stdc++.h>
using namespace std;
int group[50001];
int Find(int a){
    if(group[a]==a)return a;
    else {
        group[a]=Find(group[a]);
        return group[a];
    }
}
void Union(int a,int b){
    group[Find(b)]=Find(a);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m,Case=1;
    while(true){
        cin>>n>>m;
        if(n==0&&m==0)
            break;
        for(int i=1;i<=n;i++)
            group[i]=i;
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            Union(a,b);
        }
        int cnt=0;
        for(int i=1;i<=n;i++)
            if(group[i]==i)
                cnt++;
        cout<<"Case "<<Case<<": "<<cnt<<endl;
        Case++;
    }



}
