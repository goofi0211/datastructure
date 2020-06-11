/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /*
 ���:�ڦ��@��gohead���з|�@�����e�ݨC��node�A
      temp���и�bgohead�᭱temp���з|�@������]�����gohead node�̪�value���@��
      �A��gohead��temp���_��
      gohead�~�򩹤U�� and so on
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
