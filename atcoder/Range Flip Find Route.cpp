#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    getchar();
    int m[101][101];
    int ans[101][101];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            char c;
            c=getchar();
            if(c=='.')
                m[i][j]=0;
            else
                m[i][j]=1;
        }
        getchar();
    }
    ans[0][0]=m[0][0];
    for(int i=1;i<h;i++)
        ans[i][0]=ans[i-1][0]+m[i][0];
    for(int j=1;j<w;j++)
        ans[0][j]=ans[0][j-1]+m[0][j];
    for(int i=1;i<h;i++)
        for(int j=1;j<w;j++){
            ans[i][j]=min(ans[i-1][j],ans[i][j-1])+m[i][j];
        }
    cout<<ans[h-1][w-1];
}
