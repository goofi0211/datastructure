#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
const int maxn=500000;
using namespace std;
int main(){
    vector<vector<int>> adj;
    int city,edge;
    cin>>city>>edge;
    vector<pair<int,int>>dis;
    for(int i=0;i<=city;i++){
        vector<int> temp;
        for (int j=0;j<=city;j++){
            if(i==j)
                temp.push_back(0);
            else
                temp.push_back(maxn);
        }
        adj.push_back(temp);
    }

    for(int i=0;i<edge;i++){
        int c1,c2,range;
        cin>>c1>>c2>>range;
        adj[c1][c2]=range;
        adj[c2][c1]=range;
    }

    for(int i=0;i<city;i++){
        dis.push_back({maxn,i});
    }

    dis[0]=make_pair(0,0);

    int t=0;
    for(int i=1;i<=city-1;i++){
        //choose small
        sort(dis.begin(),dis.end());

        int scity=dis[t].second;
        int scitycost=dis[t].first;
        for(int i=0;i<city;i++)
        {
            if(dis[i].first>adj[scity][dis[i].second]+scitycost){
                 dis[i].first=adj[scity][dis[i].second]+scitycost;
            }
        }
        t+=1;
    }

    for(int i=0;i<city;i++)
        for(auto it:dis){
            if (it.second==i)
                cout<<it.first<<" ";
        }

    cout<<endl;

}
