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

void Preorder(TreeNode* root,string temp,vector<string> &ans) {
    if (root){
        temp.append(to_string(root->val));
        if(!root->left && !root->right)ans.push_back(temp);
        else{
            temp.append("->");
            Preorder(root->left,temp,ans);
            Preorder(root->right,temp,ans);
        }
    }
}
    vector<string> binaryTreePaths(TreeNode* root) {
           vector<string> ans;
        string temp = "";
        Preorder(root,temp,ans);
        return ans;
    }
};