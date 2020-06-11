#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>a(n);
    map<int,int>dic;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a[i]=temp;
        if(dic.count(temp))
            dic[temp]++;
        else
            dic[temp]=1;
    }
    map<int,int>sp;
    for(int i=0;i<a.size();i++){
        int cnt=0;
        if(sp.count(a[i]))
            cout<<sp[a[i]]<<endl;
        else{
            for(auto it:dic){
                if(it.first==a[i]){
                    cnt+=((it.second-1)*(it.second-2))/2;
                }
                else{
                    cnt+=((it.second)*(it.second-1))/2;
                }
            }

            cout<<cnt<<endl;
            sp[a[i]]=cnt;
        }
    }
}
