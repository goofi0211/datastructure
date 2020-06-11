#include<bits/stdc++.h>
using namespace std;
int len;
vector<vector<int>>ksum(vector<int>&nums,int target,int k,int index){
    vector<vector<int>>ans;
    if(index >= len)
        return ans;
    if(k == 2) {
        int i = index, j = len - 1;
        while(i < j) {
            //find a pair
            if(target - nums[i] == nums[j]) {
                vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(target-nums[i]);
                ans.push_back(temp);
                //skip duplication
                while(i<j && nums[i]==nums[i+1]) i++;
                while(i<j && nums[j-1]==nums[j]) j--;
                i++;
                j--;
            }
            //move left bound
            else if (target - nums[i] > nums[j])
                i++;
            //move right bound
            else
                j--;
        }
    }
    else{
        for (int i = index; i < len - k + 1; i++) {
            //use current number to reduce ksum into k-1sum
            vector<vector<int>> temp = ksum(nums, target - nums[i], k-1, i+1);
                if(temp.size()!=0){
                    //add previous results
                    for (auto t : temp){
                        t.push_back(nums[i]);
                        ans.push_back(t);
                    }
                }
                while (i < len-1 && nums[i] == nums[i+1]) {
                //skip duplicated numbers
                    i++;
                }
        }
    }
    return ans;
}
int main(){
    while(true){
        int n;
        vector<int>in;
        vector<vector<int>>res,t;
        cout<<"請輸入數字 -1結尾"<<endl;
        while(cin>>n&&n!=-1){
            in.push_back(n);
        }
        len=in.size();
        cout<<"target=?";
        int target;
        cin>>target;
        sort(in.begin(),in.end());
        for(int i=2;i<=len;i++){
            t=ksum(in, target, i, 0);
            if(t.size()!=0)
                for(auto i:t)
                    res.push_back(i);
        }
        if(res.size()==0)
            cout<<"湊不出來QQ"<<endl;
        for(auto t:res){
            for(auto i:t)
                cout<<i<<" ";
            cout<<endl;
        }
    }
}
