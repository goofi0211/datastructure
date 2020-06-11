#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    list<int> li;
    list<int>::iterator it = li.begin();
    li.insert(it,2);
    li.insert(it,3);
    li.insert(it,4);
    for (list<int>::iterator i = li.begin();; i++)
        cout << *i << ' ';
    return 0;
}
