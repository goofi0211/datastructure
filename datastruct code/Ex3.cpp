#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    deque<char> deque1(s.begin(), s.end());
    int N,rflag=0;
    cin>>N;
    while(N--){
        int op1,op2;
        char op3;
        cin>>op1;
        if(op1==1)
            rflag+=1;
        else{
            cin>>op2>>op3;
            if(rflag%2==0){
                if (op2==1)
                    deque1.push_front(op3);
                else
                    deque1.push_back(op3);
            }
            else{
                if (op2==1)
                    deque1.push_back(op3);
                else
                    deque1.push_front(op3);
            }

        }
    }
    if(rflag%2==0){
        for(auto it:deque1)
            cout<<it;
    }
    else{
        for(int i=deque1.size()-1;i>=0;i--)
            cout<<deque1[i];
    }


}
