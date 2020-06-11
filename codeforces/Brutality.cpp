#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a[200001];
    int N,times,j;
    cin>>N>>times;
    for(int i=0;i<N;i++)
        cin>>a[i];
    string s;
    cin>>s;
    long long ans=0;
    for(int i=0;i<N;i=j){
        for(j=i;s[i]==s[j];j++);
        sort(a+i,a+j,greater<int>());
        for(int k=i;k<i+times && k<j;k++){
            ans+=a[k];
        }
    }

    cout<<ans;
}
