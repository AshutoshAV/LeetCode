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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL){
            return res;
        }
        int n;
        n=root->val;
        vector<int> row;
        // row.push_back(n);
        // res.push_back(row);
        row.clear();
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* temp;
        while(q.size()){
            q.push(NULL);
            while(q.front()!=NULL){
                temp=q.front();
                n=temp->val;
                row.push_back(n);
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
                q.pop();

            }
            res.push_back(row);
                row.clear();
            q.pop();


        }
        return res;
    }
};
