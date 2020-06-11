#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4];
    for(int i=1;i<4;i++)
        a[i]=10;
    int N,M,index,num,bad=0;
    cin>>N>>M;
    for(int i=1;i<=M;i++){
        cin>>index>>num;
        if(a[index]!=10 && a[index]!=num)
            bad=1;
        a[index]=num;
    }
    if(N==1)
        if(a[1]==10)
            a[1]=0;
    if(N==2){
         if(a[1]==10)
            a[1]=1;
        if(a[2]==10)
            a[2]=0;
    }

    if(N==3){
        if(a[1]==10)
            a[1]=1;
        if(a[2]==10)
            a[2]=0;
        if(a[3]==10)
            a[3]=0;
    }
    if(N!=1 && a[1]==0)
        bad=1;
    if(bad)
        cout<<-1;
    else{
        if(N==1)
            cout<<a[1];
        if(N==2)
            cout<<a[1]*10+a[2];
        if(N==3)
            cout<<a[1]*100+a[2]*10+a[3];
    }
}
