/*思考:
每次進來先算array degree
再將每個數字出現次數跟degree相同的
去算他們個別的sub array長度
本題重點是用map去做加速
*/
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int,pair<int,vector<int>> >d;
        for(int i=0;i<nums.size();i++){
            int number=nums[i];
            d[number].first+=1;
            d[number].second.push_back(i);
        }
        int degree=0;
        for(auto it:d){
            degree=max(degree,it.second.first);
        }
        cout<<"d:"<<degree;
        int sub=nums.size();
        for(auto it:d){
            if(it.second.first==degree){
                int i=*min_element(it.second.second.begin(),it.second.second.end());
                int j=*max_element(it.second.second.begin(),it.second.second.end());
                sub=min(sub,j-i+1);
            }
        }
        return sub;
    }
};
