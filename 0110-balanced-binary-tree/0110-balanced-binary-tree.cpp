/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

        int maxDepth(TreeNode* root) {
        
        if(root==NULL){
            return 0;
        }
        int leftheight = maxDepth(root->left);
        int rightheight= maxDepth(root->right);
        int ans = max(leftheight , rightheight)+1;
        return ans;
    }

    bool isBalanced(TreeNode* root) {

        if(root == NULL){
            return true;
        }

        int leftheight = maxDepth(root->left);
        int rightheight = maxDepth(root->right);

        int diff = abs(leftheight - rightheight);
        bool ans1 = diff <= 1;
        
        //recursion

        bool leftans = isBalanced(root->left); 
        bool rightans = isBalanced(root->right);
        if(ans1 && leftans && rightans){return true;}
        else{return false;}
    }
};