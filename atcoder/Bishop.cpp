#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long H,W,c,ans=0;
    cin>>H>>W;
    if(H==1||W==1)
        cout<<1;
    else
        cout<<(H*W+1)/2;
}
