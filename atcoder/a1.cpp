#include<bits/stdc++.h>
using namespace std;
int a[101];
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int N,M;
    cin>>N>>M;
    int sum=0;
    for(int i=0;i<N;i++){
        cin>>a[i];
        sum+=a[i];
    }
    double v=double(sum)/double(4*M);
    int cnt=0;
    for(int i=0;i<N;i++){
        if(a[i]>v)
            cnt++;
    }

    if(cnt>=M)
        cout<<"Yes";
    else
        cout<<"No";
}
