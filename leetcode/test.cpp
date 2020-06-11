#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    map<int,int>d;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        int t=a[i];
        if(d.count(t))
            cout<<d[t]<<endl;
        else{
            a[i]=0;
            int cnt=0;
            for(int j=0;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(a[k]==a[j])
                        cnt+=1;
                }
            }
            a[i]=t;
            d[t]=cnt;
            cout<<cnt<<endl;
        }

    }

}
