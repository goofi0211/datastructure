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
    int flag=0;
    void testsymmetric(TreeNode* n1,TreeNode* n2){
        if(!n1&&n2 || n1&&!n2)
            flag=1;//利用flag去判斷是否有 n1==null n2!=null or n1!=null n2==null
        else if (n1&&n2){
            if(n1->val!=n2->val)
                flag=1;
            else{
                testsymmetric(n1->left,n2->right);
                testsymmetric(n1->right,n2->left);
            }
        }

    }
    TreeNode* n1,*n2;
    bool isSymmetric(TreeNode* root) {
        testsymmetric(root->left,root->right);
        if (flag)
            return false;
        return true;
    }

};
