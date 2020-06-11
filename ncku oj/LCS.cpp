#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
int a[2][3005];
int main() {
    fastio
    int n;
    cin>>n;
    string str1,str2;
    cin>>str1>>str2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(str1[i-1]==str2[j-1])
                a[1][j]=a[0][j-1]+1;
            else
                a[1][j]=max(a[1][j-1],a[0][j]);
        }
        for(int k=1;k<=n;k++)
            a[0][k]=a[1][k];
    }


    cout<<a[1][n];
    return 0;
}
