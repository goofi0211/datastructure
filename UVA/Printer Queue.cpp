#include<bits/stdc++.h>
#define endl '\n'
typedef struct job{
    int p;
    int my;
}job;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        queue<job> jobs;
        vector<int>jp;
        int n,m;
        int temp;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>temp;
            jp.push_back(temp);
            if (i!=m)
                jobs.push({temp,-1});
            else
                jobs.push({temp,i});
        }
        sort(jp.begin(),jp.end());
        int Max=jp.size()-1;
        int mins=0;
        while(true){
            if(jobs.front().p!=jp[Max]){
                jobs.push({jobs.front().p,jobs.front().my});
                jobs.pop();
            }
            else if(jobs.front().p==jp[Max]&&jobs.front().my==m){
                mins+=1;
                break;
            }
            else if(jobs.front().p==jp[Max]&&jobs.front().my!=m){
                mins+=1;
                Max-=1;
                jobs.pop();
            }
        }
        cout<<mins<<endl;

    }
}
