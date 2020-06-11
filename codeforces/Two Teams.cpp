#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    list<int>ls;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        ls.push_back(t);
    }
    M=0;
    for(list<int>::iterator i=ls.begin(),i!=ls.end();i++)
        M=max(*i,M);
    for(list<int>::iterator i=ls.begin(),i!=ls.end();i++)
        if(*i==M){


        }

}
