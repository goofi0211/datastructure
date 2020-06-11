#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
    pair<long long,long long> p[200005];
int main(){
    long long k,n;
    cin>>k>>n;
    for(long long i=0;i<k;i++){
        long long temp;
        cin>>temp;
        p[i]={temp,i};
    }
    sort(p,p+k);
    vector<int> arr;
    long long m=0;
    for(long long i=k-1;i>=k-n;i--){
        arr.push_back(p[i].second);
        m+=p[i].first;

    }
    sort(arr.begin(),arr.end());
    long long ans=1;
    for(long long i=1;i<arr.size();i++){
        ans*=(arr[i]-arr[i-1]);
        ans%=998244353;
    }
    cout<<m<<" "<<ans;
}
