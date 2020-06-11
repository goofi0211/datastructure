#include<bits/stdc++.h>
using namespace std;
int group[200005];
int sum[200005];
int num[200005];
int Find(int a){
    if(group[a]==a)return a;
    else return group[a]=Find(group[a]);
}
void Union(int a,int b){
    int pa=Find(a);
    int pb=Find(b);
    if(pa!=pb){
        group[pa]=pb;//a的掌門人的爸爸是b的掌門人
        sum[pb]+=sum[pa];
        num[pb]+=num[pa];
    }
}
void Move(int a,int b){
    int pa=Find(a);
    int pb=Find(b);
    if(pa!=pb){
        group[a]=pb;//更換a的門派
        sum[pb]+=a;
        num[pb]+=1;
        sum[pa]-=a;
        num[pa]-=1;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    while(cin>>n>>m){
        int op,a,b;
        for(int i=1,j=n+1;i<=n;i++,j++){
            group[i]=j,group[j]=j;
            sum[j]=i;
            num[j]=1;
        }
        for(int i=0;i<m;i++){
            cin>>op;
            if(op==1){
                cin>>a>>b;
                Union(a,b);
            }
            else if(op==2){
                cin>>a>>b;
                Move(a,b);
            }
            else{
                cin>>a;
                int fa=Find(a);
                cout<<num[fa]<<" "<<sum[fa]<<endl;
            }

        }
    }
}
