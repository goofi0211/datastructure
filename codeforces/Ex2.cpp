#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    long long num[1001];
    while(N--){
        map<long long,int>d;
        int n,k;
        cin>>n>>k;
        for (int i=0;i<n;i++){
            cin>>num[i];
        }
        sort(num,num+n,greater<int>());
        long long temp=1;
        d[0]=1;
        d[1]=1;
        while(true){
            temp=temp*k;
            if (temp>num[0])break;
            d[temp]=1;
        }
        for(auto it:d){
            cout<<it.first;
        }

    }
}
