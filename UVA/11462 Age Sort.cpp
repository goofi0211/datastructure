#include<bits/stdc++.h>
#define MAXN 2000001
using namespace std;
vector<int>a(MAXN);
vector<int>cnt(MAXN);
int main(){
    int n;
    while(true){
        cin>>n;
        if(n==0)
            break;
        for(int i=0;i<n;i++)
            cin>>a[i],cnt[a[i]]++;
        int t=0;
        for(int i=0;i<MAXN;i++)
            while(cnt[i]--)
                a[t++]=i;
        for(int i=0;i<n;i++)
            cout<<a[i];


    }
}
