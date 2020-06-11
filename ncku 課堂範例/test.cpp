#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n;
    cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++){
        getline(cin, s);
        cout<<s.size();
    }
}
