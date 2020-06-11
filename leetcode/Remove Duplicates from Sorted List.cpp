/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /*
 思考:我有一個gohead指標會一直往前看每個node，
      temp指標跟在gohead後面temp指標會一直往後跑直到跟gohead node裡的value不一樣
      再把gohead跟temp接起來
      gohead繼續往下走 and so on
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*gohead=head;
        while(gohead){
            if(gohead->next){
                ListNode*temp=gohead->next;
                while(temp->val==gohead->val){
                    temp=temp->next;
                    if(!temp)
                        break;
                }
                gohead->next=temp;
                gohead=gohead->next;
            }
            else
                break;
        }
        return head;
    }
};
