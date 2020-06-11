/*
���:�g��dp���D
�p�G�ڪ��D���׬�i-1��maximum subarray
�����׬�i�� maximum subarray�N�u�n�Ҽ{���S��index i
�p�G�n�]�tindex i
�h���׬�i�� maximum subarray=dpnum[i-1]+nums[i]
�_�h�qi�}�l�t�_�@�ӷs��subarray
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
