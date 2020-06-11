#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef struct cord {
   int x,y;
 }cord;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin>>N;
    while(N--){
        pair<int,int>cords[1001];
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x,y;
            cord temp;
            cin>>cords[i].first>>cords[i].second;
        }

        sort(cords,cords+n);

        bool flag=false;
        for(int i=0;i<n-1;i++){
            if(cords[i].second>cords[i+1].second )
                flag=true;
        }
        if(flag)
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            int tx=0,ty=0;
            for(int i=0;i<n;i++){
                while(cords[i].first-tx){
                    tx+=1;
                    cout<<"R";
                }
                while(cords[i].second-ty){
                    cout<<"U";
                    ty+=1;
                }
            }
            cout<<endl;
        }

    }


}
