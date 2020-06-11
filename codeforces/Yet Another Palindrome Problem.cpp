#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    int a[5001];
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin>>N;
    while(N--){
        int b[5001]={0};
        bool flag=false;
        set<int>myset;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            b[a[i]]++;
        for(int i=0;i<=5000;i++)
            if(b[i]>=3)
                flag=true;
        for(int i=0;i<n-1;i++){
            if(myset.count(a[i]))
                flag=true;
            else
                if(a[i+1]!=a[i])
                    myset.insert(a[i]);
            }
        if(myset.count(a[n-1]))
                flag=true;

        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
