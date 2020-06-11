#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    deque<int>d;
    vector<int>a(1000001);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        cin>>a[i];
        while(!d.empty()&&d.back()<a[i]){
            d.pop_back();
        }
        d.push_back(a[i]);
    }
    cout<<d.front()<<" ";
    for(int i=k;i<n;i++){
        cin>>a[i];
        while(!d.empty()&&d.back()<a[i]){
            d.pop_back();
        }
        d.push_back(a[i]);
        if(d.front()==a[i-k])
            d.pop_front();
        cout<<d.front()<<" ";
    }



}
