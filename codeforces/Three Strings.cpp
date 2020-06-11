#include<bits/stdc++.h>
using namespace std;
int main(){
   int N;
   cin>>N;
   while(N--){
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        bool flag=false;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s3[i])
                if(s2[i]!=s3[i]){
                    flag=true;
                    break;
                }
        }
        if (flag)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
   }


}

