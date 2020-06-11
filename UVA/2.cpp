#include<bits/stdc++.h>
#define endl '\n'

using namespace std;
    long long b[200005]={0};
    long long a[200005]={0};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        a[1]=b[1];
        long long x=0;
        for(int i=2;i<=n;i++){
            x=max(x,a[i-1]);
            a[i]=x+b[i];
        }
        for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";

}
