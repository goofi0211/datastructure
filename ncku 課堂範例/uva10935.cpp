#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    queue<int> cards;
    int card;
    while(true){
        cin>>card;
        if (card==0)
            break;
        for(int i=1;i<=card;i++)
            cards.push(i);
        cout<<"Discarded cards:";
        while(cards.size()!=1){
            if(cards.size()==2)
                cout<<" "+to_string(cards.front());
            else
                cout<<" "+to_string(cards.front())+",";
            cards.pop();
            cards.push(cards.front());
            cards.pop();
        }
        cout<<endl;
        cout<<"Remaining card: "<<cards.front()<<endl;
        cards.pop();
    }

}
