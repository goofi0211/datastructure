#include <bits/stdc++.h>
using namespace std;
int Set[100001];

int Find(int a){
    if(Set[a]==a)return a;
    else return Set[a]=Find(Set[a]);

}

void Union(int a,int b){
    Set[Find(b)]=Find(a);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;

        //initial
        for(int i=1;i<=n;i++)
            Set[i]=i;
        string pin;
        cin.ignore();
        while(getline(cin,pin)){
            if (pin.empty())break;
            stringstream sin(pin);
            int a,b;
            while(sin>>a>>b){
                Union(a,b);
            }
        }
        int cnt=0;
        for(int i=1;i<=n;i++)
            if(Set[i]==i)
                cnt+=1;
        cout<<cnt<<endl;
        if(T)cout<<endl;
    }


}
