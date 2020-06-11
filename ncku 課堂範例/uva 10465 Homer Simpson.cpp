#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define mp make_pair
#define ll long long
#define pii pair <int, int>
#define pll pair <ll, ll>
#define pb push_back
#define ary array
#define Yes cout << "Yes" <<endl;
#define No cout << "No" << endl;
using namespace std;
int dp[10000];
int main() {
    fastio
    int m,n,t;
    while(cin>>m){
        cin>>n>>t;
        //init
        //cout<<"m"<<m<<"n"<<n<<"t"<<t;
        for(int i=0;i<10000;i++)dp[i]=0;
        dp[m]=1,dp[n]=1;
        //cout<<dp[6465]<<" "<<dp[555];
        for(int i=0;i<=t;i++){
            if(i-m>=0&&i-n>=0){
                //if(i==1110)cout<<"hi1";
                if(dp[i-m]>0&&dp[i-n]>0)
                    dp[i]=max(dp[i-n]+1,dp[i-m]+1);
                else if(dp[i-m]>0)
                    dp[i]=dp[i-m]+1;
                else if(dp[i-n]>0)
                    dp[i]=dp[i-n]+1;
            }
            else if(i-m>=0){
                //if(i==1110)cout<<"hi2";
                if(dp[i-m]>0)
                    dp[i]=dp[i-m]+1;
            }
            else if(i-n>=0){
                //if(i==1110)cout<<"hi3";
                if(dp[i-n]>0)
                    dp[i]=dp[i-n]+1;
            }
        }
        //for(int i=0;i<=t;i++)cout<<dp[i];
        //cout<<endl;
        //cout<<dp[6465]<<" "<<dp[555];
        //cout<<endl;
        if(dp[t]==0){
            int k;
            for(k=t-1;k>=0&&dp[k]==0;k--);
            if(k==-1)
                cout<<0<<" "<<t<<endl;
            else
                cout<<dp[k]<<" "<<t-k<<endl;;
        }
        else
            cout<<dp[t]<<endl;
    }

    return 0;
}
