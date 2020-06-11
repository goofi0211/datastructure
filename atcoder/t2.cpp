#include <bits/stdc++.h>
using namespace std;
int b[100005];
int a[100005];
int c[100005];
int main(){
    int x,y,al,bl,cl;
    cin>>x>>y>>al>>bl>>cl;
    for(int i=0;i<al;i++)
        cin>>a[i];
    for(int i=0;i<bl;i++)
        cin>>b[i];
    for(int i=0;i<cl;i++)
        cin>>c[i];
    sort(a,a+al,greater<int>());
    sort(b,b+bl,greater<int>());
    sort(c,c+cl,greater<int>());
    int p1=x-1;
    int p2=y-1;
    int p3=0;
    long long ans=0;
    while(p3<cl&&p1>=0&&p2>=0){
        int m;
        m=min(a[p1],b[p2]);
        if(m>=c[p3])
            break;
        else{
           ans+=c[p3];
           if(m==a[p1])
                p1--;
           else
                p2--;
         p3++;
        }
    }
    if(p1<0){
        while(p2>=0){
            if(b[p2]<c[p3]){
                ans+=c[p3];
                p2--;
                p3++;
            }
            else
                break;
        }
    }
    if(p2<0){
        while(p1>=0){
            if(a[p1]<c[p3]){
                ans+=c[p3];
                p1--;
                p3++;
            }
            else
                break;
        }
    }
    for(int i=0;i<=p1;i++)
        ans+=a[i];
    for(int i=0;i<=p2;i++)
        ans+=b[i];
    cout<<ans;


}
