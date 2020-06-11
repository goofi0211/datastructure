#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    while(n!=1){
        for(int i=0;i<n-1;i++)
            a[i]=abs((a[i]-'0')-(a[i+1]-'0'))+'0';
        n-=1;
    }
    cout<<a[0];
}
