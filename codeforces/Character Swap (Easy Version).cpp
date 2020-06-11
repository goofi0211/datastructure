#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
        vector<int>a;
        string s1,s2;
        int lens;
        cin>>lens;
        cin>>s1>>s2;
        bool flag=false;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i])
                a.push_back(i);
        }

        if (a.size()!=2){
            flag=true;
        }
        else{
            if(s1[a[0]]!=s1[a[1]])
                flag=true;
            if(s2[a[0]]!=s2[a[1]])
                flag=true;
            char c=s1[a[0]];
            s1[a[0]]=s2[a[1]];
            s2[a[1]]=c;
            if (s1!=s2)
                flag=true;
            //cout<<s1<<" "<<s2;
        }
        if(flag)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
}
