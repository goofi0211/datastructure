#include<bits/stdc++.h>
using namespace std;
vector<int>a(1000001);
vector<int>temp(1000001);
void mergesort(int l,int r){
    if(r-l<=1)
        return ;
    int m=(l+r)/2;
    mergesort(l,m);
    mergesort(m,r);
    copy(a.begin()+l,a.begin()+r,temp.begin()+l);
    int p=l,q=m,i=l;
    while(i<r){

        if(q==r||p!=m&&temp[p]<=temp[q])
            a[i++]=temp[p++];
        else
            a[i++]=temp[q++];
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    mergesort(0,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
