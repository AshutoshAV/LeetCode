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

    int sum=0;
    void traverse(TreeNode* root, char q){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL && q=='l'){
            sum+=root->val;
        }
        traverse(root->left,'l');
        traverse(root->right,'r');
    }
    int sumOfLeftLeaves(TreeNode* root) {
        traverse(root,'r');
        return sum;

    }
};
