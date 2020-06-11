#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
int maxNum[500005][32];
//int minNum[MAXARR][32];
void RMQ (int n )   //預處理ST表,數組中共n個元素  O(nlogn)
{
for (int j=1;(1<<j)<=n; j++)         //註意(1<<j)加上括號
   for (int i=1;i+(1<<j)-1<=n;i++)  //
      maxNum[i][j]=max( maxNum[i] [j-1], maxNum[i+(1<<(j-1))] [j-1] );//求最小值是函數min
 }
int main() {
    fastio
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int t;
        cin>>t;
        maxNum[i][0]=t;
    }
    RMQ(n);
    /*
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++)
            cout<<maxNum[i][j]<<" ";
        cout<<endl;
    }
    */
    int N;
    cin>>N;
    while(N--){
        int l,r,l1,r1;
        cin>>l>>r;
        l1=l;
        r1=r;
        l=min(l1,r1);
        r=max(l1,r1);
        int k=(int)(log2(r-l+1));
        cout<<max(maxNum[l][k],maxNum[r-(1<<k)+1][k])<<endl;
    }
    return 0;
}

