#include<bits/stdc++.h>
using namespace std;
const int maxn=1000;
int main(){
    int T;
    cin>>T;
    int x[maxn];
    for(int i=0;i<T;i++){
        int L,n;
        cin>>L>>n;
        for(int j=0;j<n;j++)cin>>x[j];

        sort(x,x+n);

        int maxtime,mintime;

        maxtime=L-x[0];

        int temp=L/2,Min=L,ci;
        for(int j=0;j<n;j++){
            if(Min>abs(temp-x[j])){
                Min=abs(temp-x[j]);
                ci=x[j];
            }
        }
        if(ci>temp)
            mintime=L-ci;
        else
            mintime=ci;
        cout<<mintime<<" "<<maxtime<<endl;
    }
}
