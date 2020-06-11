#include<bits/stdc++.h>
using namespace std;
int const maxN=5e3+1;
int main(){
    int T,c=1;
    cin>>T;
    int A[maxN];
    while(T--){
        int N,K,alleat=0;
        cin>>N>>K;
        for(int i=0;i<N;i++)cin>>A[i];
        sort(A,A+N);
        int day=0,eat=0,flag=1;// how many day pass
        while(1){
            flag=1;
            eat=0;
            for(int i=0;i<N;i++){
                if(A[i]-day>0){
                    eat+=1;
                    A[i]=0;
                    flag=0;
                }

                if(eat==K)break;
            }
            if(flag) break;
            day+=1;
            alleat+=eat;
        }
        cout<<"Case #"<<c<<": "<<alleat<<endl;
        c+=1;
    }
}
