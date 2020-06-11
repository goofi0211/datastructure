#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
int maxn=100001;
long long INF=9223372036854775807;
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
    int n,m;
    cin>>n>>m;
    vector<node>E[maxn];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        E[u].push_back({v,w});
        E[v].push_back({u,w});
    }
    priority_queue<node>Q;
    vector<long long>s(n,INF);
    Q.push({0,s[0]=0});
    while(!Q.empty()){
        node u=Q.top();
        Q.pop();
        for(auto v :E[u.id]){
            long long update=s[u.id]+v.w;
            if(update<s[v.id]){
                Q.push({v.id,s[v.id]=update});
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<s[i]<<" ";
}
