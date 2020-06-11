/*σ:
肈ヘ琌弧璶璸衡arrayい案计㎝
┮рsum=arrayい案计㎝
–Ω癸arrayэ
穦Τㄢ贺
案->计,案计
芭奔案计 挡狦琌计┪案计
案计璶ㄓ
计ぃノ瞶
*/
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries){
        vector<int>ans;
        int sum=0;
        for(int i=0;i<A.size();i++)
            if(A[i]%2==0)
                sum+=A[i];
        for(int i=0;i<queries.size();i++){
            if(A[queries[i][1]]%2==0)
                sum-=A[queries[i][1]];
            A[queries[i][1]]+=queries[i][0];
            if(A[queries[i][1]]%2==0)
                sum+=A[queries[i][1]];
            ans.push_back(sum);
        }
        return ans;
    }
};
