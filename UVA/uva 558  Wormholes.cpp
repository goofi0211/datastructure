#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
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
        s[0]=0;//�X�o�I��0
        for(int i=0;i<e;i++){
            int n1,n2,w;
            cin>>n1>>n2>>w;
            E.push_back({n1,n2,w});
        }
        //��@���䰵relax
        for (int i = 1; i < n ; i++) // �@ n - 1 ��
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
