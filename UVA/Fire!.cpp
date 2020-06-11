#include<bits/stdc++.h>

#define INF 2147483647
using namespace std;
typedef struct point{
    int row;
    int col;
    int time;
}point;
char a[1001][1001];
int maze[1001][1001];
bool jvis[1001][1001];
bool fvis[1001][1001];
int main(){
    int T;
    cin>>T;
    while(T--){

        int row,col;
        cin>>row>>col;
        queue<point>J;
        queue<point>F;
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++){
                cin>>a[i][j];
                jvis[i][j]=false;
                fvis[i][j]=false;
            }

        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++){
                if(a[i][j]=='#')maze[i][j]=0;
                if(a[i][j]=='.')maze[i][j]=INF;
                if(a[i][j] == 'J'){
                    point t;
                    t.row=i,t.col=j,t.time=0;
                    J.push(t); maze[i][j] = INF; jvis[i][j] = true;
                }
                if(a[i][j] == 'F') {
                    point t;
                    t.row=i,t.col=j,t.time=0;
                    F.push(t); maze[i][j] = 0; fvis[i][j] = true;}
            }
        int dr[]={0,0,1,-1};
        int dc[]={1,-1,0,0};

        while(!F.empty()){
            point f=F.front();F.pop();
            for(int i=0;i<4;i++){
                int nr=f.row+dr[i],nc=f.col+dc[i];
                if(nr<0||nr>=row||nc<0||nc>=col||maze[nr][nc]!=INF||fvis[nr][nc]==true)continue;
                maze[nr][nc]=f.time+1;
                fvis[nr][nc]=true;
                point t;
                t.row=nr;t.col=nc;t.time=f.time+1;
                F.push(t);
            }
        }

        int escape=-1;
        while(!J.empty()){
            point j=J.front();
            J.pop();
            if(j.row==row-1||j.col==col-1||j.row==0||j.col==0){
                escape=j.time+1;
                break;
            }
            for(int i=0;i<4;i++){
                int nr=j.row+dr[i],nc=j.col+dc[i];
                if(nr<0||nr>=row||nc<0||nc>=col||j.time+1>=maze[nr][nc]||jvis[nr][nc]==true)continue;
                jvis[nr][nc]=true;
                point t;
                t.row=nr;t.col=nc;t.time=j.time+1;
                J.push(t);
            }
        }

        if(escape==-1)
            cout<<"IMPOSSIBLE"<<endl;
        else
            cout<<escape<<endl;
    }
}
