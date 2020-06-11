#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p[n];
    vector<int>dp[n];
    for(int i=0;i<n;i++){
        dp[i].resize(n);
    }
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=n-1;i>0;i--){
        for(int j=i;j<n;j++){
            if(i==j)
                dp[i][j]=0;
            else{
                int t=2147483647;
                for(int k=i;k<j;k++){
                    t=min(t,dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j]);
                }
                dp[i][j]=t;
            }
        }
    }
    cout<<dp[1][n-1];
}
