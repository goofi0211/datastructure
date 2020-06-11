#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
int maxn=10001;
struct node {
  int id, w; // id := 點編號, w := 連結到此點的權重 (邊權重)
  bool operator<(const node &rhs) const {
    return w > rhs.w; // 使 priority_queue 為 min heap
  }
};
struct edge {
  int u, v, w; // u := 起端編號, v := 終端編號, w := 權重
  bool operator<(const edge &rhs) const {
    return w > rhs.w; // 使 priority_queue 為 min heap
  }
};
int main() {
    fastio
    while(true){
        vector<edge>MST;
        vector<node> E[maxn]; // maxn 為最大節點數
        bool vis[maxn]={false};
        priority_queue<edge> Q; // 每次挑最小權重的邊
        int n,m,cost=0;
        cin>>n>>m;
        if(n==0&&m==0)break;
        for(int i=0;i<m;i++){
            int u,v,w;
            cin>>u>>v>>w;
            if(i==0){
                Q.push({u,u,0});
            }
            E[u].push_back({v,w});
            E[v].push_back({u,w});
        }
        while(!Q.empty()){
            edge e=Q.top();
            Q.pop();
            int u =e.v;
            if (vis[u]) continue; // 避免出現環
            vis[u] = true;
            cost+=e.w;
            MST.push_back(e);
            for(auto v:E[u]){
                if(!vis[v.id]){
                    Q.push({u,v.id,v.w});
                }
            }
        }
        if(MST.size()!=n)
            cout<<-1<<endl;
        else
            cout<<cost<<endl;
    }
    return 0;
}
