#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    int a,b,c;
    cin>>a,b,c;
    double da,db,dc;
    da=sqrt(a);
    db=sqrt(b);
    dc=sqrt(c);
    if (da+db<dc)
        cout<<"Yes";
    else
        cout<<"No";
}
