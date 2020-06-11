#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
int maxn=10001;
struct node {
  int id, w; // id := �I�s��, w := �s���즹�I���v�� (���v��)
  bool operator<(const node &rhs) const {
    return w > rhs.w; // �� priority_queue �� min heap
  }
};
struct edge {
  int u, v, w; // u := �_�ݽs��, v := �׺ݽs��, w := �v��
  bool operator<(const edge &rhs) const {
    return w > rhs.w; // �� priority_queue �� min heap
  }
};
int main() {
    fastio
    while(true){
        vector<edge>MST;
        vector<node> E[maxn]; // maxn ���̤j�`�I��
        bool vis[maxn]={false};
        priority_queue<edge> Q; // �C���D�̤p�v������
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
            if (vis[u]) continue; // �קK�X�{��
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
