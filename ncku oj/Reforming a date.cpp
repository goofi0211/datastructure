#include <string>
#include <iostream>
#include<vector>
using namespace std;
vector<string> split(const string & str ,const string & delim){
	vector<string> res;
	if("" == str) return  res;
	string strs=str +delim;
	size_t pos;
	size_t size = strs.size();
	for(int i=0;i<size;i++){

		pos = strs.find(delim,i);
			string s = strs.substr(i, pos - i);
			res.push_back(s);
			i = pos + delim.size() - 1;
	}
	return res;
}
int main() {
	string s;
	cin>>s;
	vector<string> res = split(s,"/");
	if (res[0].size()==1)
        res[0]="0"+res[0];
    if (res[1].size()==1)
        res[1]="0"+res[1];
    cout<<res[2]+res[0]+res[1];
}
