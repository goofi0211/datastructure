/*
思考:經典dp問題
如果我知道長度為i-1的maximum subarray
那長度為i的 maximum subarray就只要考慮有沒有index i
如果要包含index i
則長度為i的 maximum subarray=dpnum[i-1]+nums[i]
否則從i開始另起一個新的subarray
dpnum[i]=nums[i]
*/
class Solution {
public:
    vector<int>dpnum;
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        dpnum.resize(nums.size());
        dpnum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>dpnum[i-1]+nums[i])
                dpnum[i]=nums[i];
            else
                dpnum[i]=dpnum[i-1]+nums[i];
        }
        int m=dpnum[0];
        for(int i=0;i<dpnum.size();i++){
            m=max(m,dpnum[i]);
        }
        return m;
    }
};
