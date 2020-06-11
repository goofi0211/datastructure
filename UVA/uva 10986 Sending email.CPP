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
int const maxn=20001;
int main() {
    fastio
    int N;
    cin>>N;
    int cnt=0;
    while(N--){
        cnt++;
        vector<node>a[maxn];
        int v,e,f,l;
        cin>>v>>e>>f>>l;
        vector<int>s(v,2000000000);
        for(int i=0;i<e;i++){
            int n1,n2,w;
            cin>>n1>>n2>>w;
            a[n1].push_back({n2,w});
            a[n2].push_back({n1,w});
        }
        s[f]=0;
        priority_queue<node>p;
        p.push({f,s[f]});
        while(!p.empty()){
            node u=p.top();
            p.pop();
            for(node i:a[u.id]){
                int update= u.w+ i.w;
                if (update < s[i.id])
                    p.push({i.id, s[i.id] = update /* relaxation */});
            }
        }
        if(s[l]==2000000000)
            cout<<"Case #"<<cnt<<": "<<"unreachable"<<endl;
        else
            cout<<"Case #"<<cnt<<": "<<s[l]<<endl;
    }
    return 0;
}