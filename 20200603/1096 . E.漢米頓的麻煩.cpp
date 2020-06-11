#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
int maxn=101;
int INF=2147483647;
int main(){
    fastio
    while(true){
        int N;
        long long matrix[maxn][maxn];
        cin>>N;
        if(N==0)
            break;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                int t;
                cin>>t;
                if(t==0)
                    matrix[i][j]=INF;
                else
                    matrix[i][j]=t;
            }
        }
        for(int k=0;k<N;k++)
            for(int i=0;i<N;i++)
                for(int j=0;j<N;j++)
                    matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);

        long long m=2147483647;
        for(int i=0;i<N;i++)
            m=min(m,matrix[i][i]);
        if(m==2147483647)
            cout<<-1<<endl;
        else
            cout<<m<<endl;
    }
}
