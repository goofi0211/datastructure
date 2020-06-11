#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define FASTINOUT ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const ll mod = 1e9+7;
const int N=2e3+9;
ll x,y,a,b,c;
int main()
{
    FASTINOUT;
    cin>>x>>y>>a>>b>>c;
    priority_queue<ll>red,green,no;
    ll op;
    for (int i=0; i<a; i++)
    {
        cin>>op;
        red.push(op);
    }
    for (int i=0; i<b; i++)
    {
        cin>>op;
        green.push(op);
    }
    for (int i=0; i<c; i++)
    {
        cin>>op;
        no.push(op);
    }
    ll ans=0;
    for (int i=0;i<x;i++){
        no.push(red.top());
        red.pop();
    }
    for (int i=0;i<y;i++){
        no.push(green.top());
        green.pop();
    }
    for (int i=0;i<x+y;i++){
        ans+=no.top();
        no.pop();
    }
    cout<<ans<<endl;
    return 0;
}
