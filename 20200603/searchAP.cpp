#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
const int maxN=101;
int D[maxN], L[maxN], tms=1,root;
vector <int> edge[maxN],AP;
int ans;
void dfs(int cur ,int p){
    D[cur]=L[cur]=++tms;
    int child=0;
    bool isAP=false;

    for(auto i :edge[cur]){
        if(i==p)
            continue;
        else if(!D[i]){
            child++;
            dfs(i,cur);
            L[cur]=min(L[cur],L[i]);
            if(cur!=root&&D[cur]<=L[i]){
                isAP=true;
                //bridge.push_back ( make_pair ( cur, i ) );
            }
            if(cur==root&&child==2)
                isAP=true;
        }
        else{
            L[cur]=min(L[cur],D[i]);
        }
    }
    if(isAP)
        ans++;
}
int main()
{
    int N;
    string line;
    while (scanf("%d ", &N) && N) {
        // Intital
        tms = 0;
        ans = 0;
        for (int i = 0; i <= N; ++i) {
            edge[i].clear();
            D[i] = 0, L[i] = 0;
        }
        // Input
        int a, b;
        while (getline(cin, line)) {
            stringstream ss(line);
            ss >> a;
            if (!a) break;
            while (ss >> b) {
                edge[a].push_back(b);
                edge[b].push_back(a);
            }
        }

        dfs(1, root=1);

        printf("%d\n", ans);
    }
}
