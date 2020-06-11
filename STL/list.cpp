#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    list<int>ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_front(3);
    list<int>::iterator i=ls.begin();
    ls.insert(i,4);
    ls.insert(i,5);
    ls.insert(i,6);
    for (list<int>::iterator i = ls.begin(); i != ls.end(); i++)
        cout << *i << ' ';

}
