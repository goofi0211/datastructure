/*���:��i�ө��ᨫ
���U��j�O�Ψӧ��Ĥ@�Ӹ�i���@�˪�
���D�h�Τ@��k�ӰO���ثe�}�C����
j-i�N���O�s��X�{���Ӽ�
���N�L�নstring �b�@�ӭө�ichars
*/
class Solution {
public:
    int compress(vector<char>& chars) {
        int j,cnt,k=0;
        for(int i=0;i<chars.size();i=j){
            for(j=i;j<chars.size()&&chars[j]==chars[i];j++);
            chars[k++]=chars[j-1];
            if(j-i>1){
                string temp=to_string(j-i);
                for(int p=0;p<temp.size();p++)
                    chars[k++]=temp[p];
            }
        }
        return k;
    }

};
