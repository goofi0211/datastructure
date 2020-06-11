#include<bits/stdc++.h>
using namespace std;
int main(){
    long long N,A,B,t;
    cin>>N>>A>>B;
    t=N%(A+B);
    if(t>A)
        cout<<A*(N/(A+B))+A;
    else
        cout<<A*(N/(A+B))+t;
}
