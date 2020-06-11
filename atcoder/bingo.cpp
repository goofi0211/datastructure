#include<bits/stdc++.h>
using namespace std;
int main(){
    int bingo[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>bingo[i][j];
    int N,b;
    cin>>N;
    for (int i=0;i<N;i++){
        cin>>b;
        for(int q=0;q<3;q++)
            for(int k=0;k<3;k++){
                if (bingo[q][k]==b){
                    bingo[q][k]=0;
                }
            }

    }

    if(bingo[0][0]==0&&bingo[1][1]==0&&bingo[2][2]==0)
        cout<<"Yes";
    else if(bingo[0][1]==0&&bingo[1][1]==0&&bingo[2][1]==0)
        cout<<"Yes";
    else if(bingo[0][2]==0&&bingo[1][1]==0&&bingo[2][0]==0)
        cout<<"Yes";
    else if(bingo[1][0]==0&&bingo[1][1]==0&&bingo[1][2]==0)
        cout<<"Yes";
    else if(bingo[0][0]==0&&bingo[0][1]==0&&bingo[0][2]==0)
        cout<<"Yes";
    else if(bingo[0][2]==0&&bingo[1][2]==0&&bingo[2][2]==0)
        cout<<"Yes";
    else if(bingo[2][0]==0&&bingo[2][1]==0&&bingo[2][2]==0)
        cout<<"Yes";
    else if(bingo[0][0]==0&&bingo[1][0]==0&&bingo[2][0]==0)
        cout<<"Yes";
    else
        cout<<"No";

}

