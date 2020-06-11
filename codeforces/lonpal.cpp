#include<bits/stdc++.h>
using namespace std;
set<string>st;
int main()
{
	int n,m;
	string s,t,mid="",ans="",rev="";
	cin>>n>>m;
	while(n--)	{
		cin>>s,t=s;
		reverse(t.begin(),t.end());
		if(s==t){ mid=t;cout<<"d:"<<mid<<endl;}
		else if(st.count(t)){
		ans+=t;
		rev=s+rev;
		}
		st.insert(s);
	}
	ans=ans+mid+rev;
	cout<<ans.size()<<"\n"<<ans<<"\n";
}
