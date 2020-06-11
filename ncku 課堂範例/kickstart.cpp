#include<bits/stdc++.h>
#define endl '\n'
int people[100001];
int subpeople[100001];
int ans[100001];
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    int cnt=1;
    while(T--){
        int N,p;
        cin>>N>>p;
        for (int i=0;i<N;i++)
            cin>>people[i];
        sort(people,people+N,[](int x,int y){return x>y;});
        int t=0;
        for(int j=0;j<p;j++){
            t+=people[j];
        }
        subpeople[0]=t;
        for(int i=1;i<=N-p;i++){
            t=t-people[i-1]+people[i+p-1];
            subpeople[i]=t;
        }
        for(int i=0;i<=N-p;i++)
            ans[i]=p*people[i]-subpeople[i];
        int m=2147483647;
        for(int i=0;i<=N-p;i++)
            m=min(ans[i],m);
        cout<<"Case #"<<cnt<<": "<<m<<endl;
        cnt++;
    }
}
