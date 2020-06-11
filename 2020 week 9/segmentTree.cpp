//此程式是單點更新後求區間最大值的線段樹

#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
using namespace std;


#define maxN 100005

int seg[maxN<<2];//開所需的四倍(比較不會有bug)

void update(int l,int r ,int index ,int value ,int n){
    if(l==r)
        seg[n]=value;
    else{
        int mid=(l+r)>>1,leftSon=n<<1,rightSon=leftSon+1;
        if(index<=mid)//case 1
            update(l,mid,index,value,leftSon);
        else //case 2
            update(mid+1,r,index,value,rightSon);

        //更新最大值
        seg[n]=max(seg[leftSon],seg[rightSon]);
    }
}
/*
case 1:
l 	 mid    r
|_____|_____|
	^
  index
case 2:
l 	 mid    r
|_____|_____|
		^
	  index
*/
int query(int l,int r,int nowL,int nowR ,int n){
    //查詢的左邊界 查詢的右邊界 當前區間左邊界 當前區間右邊界 當前區間編號
    if(l<=nowL&&nowR<=r){
        return seg[n];
    }
    int mid=(nowL+nowR)>>1,leftSon=n<<1,rightSon=leftSon+1;
    if(r<=mid)
        return query(l,r,nowL,mid,leftSon);
    else if(l>mid)
        return query(l,r,mid+1,nowR,rightSon);
    else
        return max(query(l,r,nowL,mid,leftSon),query(l,r,mid+1,nowR,rightSon));
}

/*
case 1:
nowL    mid    nowR
|________|________|
  |___|
  l   r
case 2:
nowL    mid    nowR
|________|________|
            |___|
            l   r
case 3:
nowL    mid    nowR
|________|________|
       |___|
       l   r
*/
int main(){
    fastio
    int n,m,value,op,l,r,id,v;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>value;
        update(1,n,i,value,1);
    }
    while(m--){
        cin>>op;
        if(op==1){
            cin>>id>>v;
            update(1,n,id,v,1);
        }
        else{
            cin>>l>>r;
            cout<<query(l,r,1,n,1)<<endl;
        }

    }
}
