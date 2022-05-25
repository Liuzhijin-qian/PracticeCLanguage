/*
 * @lc app=leetcode.cn id=235 lang=cpp
 *
 * [235] 二叉搜索树的最近公共祖先
 */

// @lc code=start
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return findLowAncestor(root,p,q);
    }
    TreeNode* findLowAncestor(TreeNode* root,TreeNode* p,TreeNode* q){
        if (root == nullptr){
            return nullptr;
        }
        if(root -> val == p -> val  ||  root -> val == q -> val){
            return root;
        }
        TreeNode* left1 = findLowAncestor(root->left,p,q);
        TreeNode* right1 = findLowAncestor(root->right,p,q);
        if( left1 && right1){
            return root;
        }
        return left1 == nullptr ? right1 : left1;
    }
};
// @lc code=end

