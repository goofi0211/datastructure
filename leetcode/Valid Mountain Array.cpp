/*���:
�Τ@��i�ӥN��mountain��peak
�p�G�o��i�O�b�Y�Ϊ̬O�b���N��o���O�@�y�s
���i���� j�q�s�Y�}�l��
�p�Gj�i�H���쵲��
�h�N�����@�y�s
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
