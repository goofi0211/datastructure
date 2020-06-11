//dfs可以用來尋找圖是否連通

#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
char Map[101][101];
int row ,col;
void dfs(int i,int j){
    if(Map[i][j]=='*')
        return;
    Map[i][j]='*';
    for(int r=i-1;r<=i+1;r++)
        for(int c=j-1;c<=j+1;c++)
            if(r>=0&&r<row&&c>=0&&c<col)
                dfs(r,c);
}
int main(){
    fastio;
    while(true){
        cin>>row>>col;
        if(row==0&&col==0)
            break;

        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
                cin>>Map[i][j];

        int cnt=0;
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
                if(Map[i][j]=='@'){
                    cnt++;
                    dfs(i,j);
                }
        cout<<cnt<<endl;
    }



}
