#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
typedef struct point{
    int level;
    int row;
    int col;
    int time;
}point;
char dungeon[31][31][31];
bool visted[31][31][31];
int main(){
    fastio;
    int l,r,c;
    while(true){
        queue<point>p;
        cin>>l>>r>>c;
        if(l==0&&r==0&&c==0)
            break;
        for(int i=0;i<l;i++)
            for(int j=0;j<r;j++)
                for(int k=0;k<c;k++){
                    cin>>dungeon[i][j][k];
                    visted[i][j][k]=false;
                    if(dungeon[i][j][k]=='S'){
                        point t;
                        t.level=i;t.row=j;t.col=k;t.time=0;
                        visted[i][j][k]=true;
                        p.push(t);
                    }
                }


        int dr[6][3]={{1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1}};
        int escape=-1;
        while(!p.empty()){
            int f=0;
            point cur;
            cur=p.front();p.pop();
            for(int i=0;i<6;i++){
                int nz=cur.level+dr[i][0];int nx=cur.row+dr[i][1];int ny=cur.col+dr[i][2];
                if(nz<0||nz>=l||nx<0||nx>=r||ny<0||ny>=c||visted[nz][nx][ny]!=false||dungeon[nz][nx][ny]=='#')continue;
                visted[nz][nx][ny]=true;
                point next;
                next.level=nz;next.row=nx;next.col=ny;next.time=cur.time+1;
                //dungeon[nz][nx][ny]=next.time+'0';
                if(dungeon[nz][nx][ny]=='E'){
                    escape=next.time;
                    f=1;
                    break;
                }
                p.push(next);
            }
            if(f)
                break;
        }
        /*
        for(int i=0;i<l;i++){
            for(int j=0;j<r;j++){
                for(int k=0;k<c;k++)
                        cout<<dungeon[i][j][k];
                cout<<endl;
            }
            cout<<endl;
        }*/
        if(escape==-1)
            cout<<"Trapped!"<<endl;
        else
            cout<<"Escaped in "<<escape<<" minute(s)."<<endl;

    }
}
