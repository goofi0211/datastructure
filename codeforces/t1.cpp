#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x=b-a;
        int y=d-c;
        int t1,t2,x1,y1,x2,y2;
        cin>>t1>>t2>>x1>>y1>>x2>>y2;
        x+=t1;
        y+=t2;
        int f=0;
        if(x2-x1==0)
            if(a!=0||b!=0)
                f=1;
        if(y2-y1==0)
            if(c!=0||d!=0)
                f=1;
        if(x1>x||x>x2){
                f=1;
        }
        if(y1>y||y>y2)
            f=1;

    if(f)
        cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;



    }
}
