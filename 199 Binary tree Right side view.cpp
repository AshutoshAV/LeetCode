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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        queue<TreeNode*> q;
        int n;
        q.push(root);
        TreeNode* temp;
        if(root==NULL) return res;
        while(q.size()) {
            q.push(NULL);
            while(q.front()!=NULL){
                temp=q.front();
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
                q.pop();
                n=temp->val;
            }
            res.push_back(n);
            q.pop();
        }
        return res;

    }
};
