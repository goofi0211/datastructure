/*思考:
用一個i來代表mountain的peak
如果這個i是在頭或者是在尾代表這不是一座山
找到i之後 j從山頭開始走
如果j可以走到結束
則代表此為一座山
return true
else
return false
*/
class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size()<3)
            return false;
        int j,i;
        for(i=0;i<A.size()-1&&A[i]<A[i+1];i++);
        if(i==A.size()-1||i==0)
            return false;
        for(j=i;j<A.size()-1&&A[j]>A[j+1];j++);
        if(j==A.size()-1)
            return true;
        else
            return false;
    }
};
