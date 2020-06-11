/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int ans=0;

    void maxZigZag(TreeNode* start,int direction,int cnt){
        ans=max(ans,cnt);
        if(direction==0){
            if(start->left){
                maxZigZag(start->left,1,cnt+1);
            }


            if(start->right){
                maxZigZag(start->right,0,1);
            }

        }
        else if(direction==1){

            if(start->right)
                maxZigZag(start->right,0,cnt+1);

            if(start->left)
                maxZigZag(start->left,1,1);
        }
    }
    int longestZigZag(TreeNode* root) {
        maxZigZag(root,0,0);
        return ans;
    }
};
