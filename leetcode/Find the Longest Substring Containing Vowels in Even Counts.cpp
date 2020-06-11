#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findTheLongestSubstring(string s) {
        vector<int>cvowel;
        cvowel.resize(5);
        map<vector<int>,int>d;
        d[cvowel]=-1;
        char vowel[]={'a','e','i','o','u'};
        int ans=0;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<5;j++){
                if (s[i]==vowel[j]){
                    cvowel[j]+=1;
                    cvowel[j]%=2;
                }
            }
            if(!d.count(cvowel))
                d[cvowel]=i;
            else{
                if(ans<i-d[cvowel])
                    ans=i-d[cvowel];
            }
        }
        return ans;
    }
};
int main(){

}
