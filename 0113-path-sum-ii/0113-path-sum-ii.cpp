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

    void solve(TreeNode* root, int targetSum, int &sum, vector<int> &path, vector<vector<int>> &ans){
        if(root == NULL){
            return;
        }

        // leaf node
        if(root->left == NULL && root->right == NULL){
            //include
            path.push_back(root->val);
            sum += root->val;

            if(sum == targetSum){
                ans.push_back(path);
            }
            //exclude
            path.pop_back();
            sum -= root->val;
             return;
        }
       
    
    //current node

    path.push_back(root->val);
    sum +=root->val;
    
    solve(root->left, targetSum, sum, path, ans);
    solve(root->right, targetSum, sum, path, ans);

    //backtrack

    path.pop_back();
    sum -= root->val;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int>path;
        int sum =0;
        solve(root, targetSum, sum, path, ans);
        return ans;
    }
};