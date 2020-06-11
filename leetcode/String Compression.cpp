/*思考:用i來往後走
接下來j是用來找到第一個跟i不一樣的
此題多用一個k來記錄目前陣列長度
j-i代表的是連續出現的個數
先將他轉成string 在一個個放進chars
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
