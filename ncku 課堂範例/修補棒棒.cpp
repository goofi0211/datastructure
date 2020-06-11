#include<bits/stdc++.h>
using namespace std;
int a[1002][1002];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    for(int j=0;j<=n;j++)
        a[0][j]=1;
    a[1][0]=0;
    for(int j=1;j<=n;j++)
        a[1][j]=1;
    for(int i=2;i<=n;i++){
        for(int j=2;j<=k;j++){
            a[i][j]=(a[i-1][j-1]+a[i-2][j-1])%1000000009;
        }
    }


    cout<<a[n][k];
}
