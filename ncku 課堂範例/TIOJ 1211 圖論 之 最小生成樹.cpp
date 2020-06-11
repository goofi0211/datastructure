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
int const maxn=10001;


int main() {
    fastio
    while(true){
        vector<node> E[maxn];
        vector<bool> vis(maxn,false);
        int n,e;
        cin>>n>>e;
        if(n==0&&e==0)break;
        vector<edge>MST;
        priority_queue<edge> Q; // �C���D�̤p�v������
        int f;
        for(int i=0;i<e;i++){
            int tu,tv,tw;
            cin>>tu>>tv>>tw;
            f=tu;
            E[tu].push_back({tv,tw});
            E[tv].push_back({tu,tw});
        }
        Q.push({f, f, 0}); // ��l���ͦ��� (�u���@���I)
        int cost=0;
        while (!Q.empty()) {
            edge e = Q.top(); Q.pop();
            int u = e.v;
            if (vis[u]) continue; // �קK�X�{��
            vis[u] = true;
            cost += e.w;
            MST.push_back(e);
            for (auto v: E[u])
                if(!vis[v.id]){
                    Q.push({u, v.id, v.w});
                }
        }

        if(MST.size()!=n)
            cout<<-1<<endl;
        else
            cout<<cost<<endl;
    }
    return 0;
}
