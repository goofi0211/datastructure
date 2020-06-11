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
int dp[3000][3000];
int const INF = 0x3f3f3f3f;
int main() {
    fastio
    int n,L;
    cin>>n>>L;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    //init
    for(int i = 0; i < n; i++)
        for(int P = 0; P <= L; P++) dp[i][P] = -INF;
    dp[0][min(L,a[0])]=0;
    for(int i=1;i<n;i++){
        for(int j=L;j>=0;j--){
            //¬å
            int t=min(j,a[i]);
            dp[i][j-t]=max(dp[i][j-t],dp[i-1][j]+t);
            //¤£¬å
            dp[i][min(j+a[i],L)]=max(dp[i][min(j+a[i],L)],dp[i-1][j]);
        }
    }
    int ans = 0;
    for(int P = 0; P <= L; P++) ans = max(ans, dp[n-1][P]);
    cout<<ans;
    return 0;
}
