#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
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
int const maxn=1001;

int main() {
    fastio
    int N;
    cin>>N;
    while(N--){
        vector<edge> E;
        int n,e;
        cin>>n>>e;
        vector<int>s(n,0x3f);
        s[0]=0;//出發點為0
        for(int i=0;i<e;i++){
            int n1,n2,w;
            cin>>n1>>n2>>w;
            E.push_back({n1,n2,w});
        }
        //選一條邊做relax
        for (int i = 1; i < n ; i++) // 共 n - 1 次
            for (edge e: E)
                s[e.v] = min(s[e.v], s[e.u] + e.w);
        int f=0;
        for (edge e: E){
            if(s[e.v]>s[e.u] + e.w)
                f=1;
        }
        if(f)
            cout<<"possible"<<endl;
        else
            cout<<"not possible"<<endl;

    }
    return 0;
}
