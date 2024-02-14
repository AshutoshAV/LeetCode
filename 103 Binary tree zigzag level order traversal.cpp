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

    void reverse(vector<int> &row){
        int left=0,right=row.size()-1;
        while(left<right){
            swap(row[left],row[right]);
            right--;
            left++;
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        vector<int> row;
        int n;
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL) return res;
        TreeNode* temp;
        int way=1;
        while(q.size()){
            q.push(NULL);
            while(q.front()!=NULL){
                temp=q.front();
                n=temp->val;
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
                row.push_back(n);
                q.pop();
            }
            way++;
            if(way&1) reverse(row);
            res.push_back(row);
            row.clear();
            q.pop();
        }
        return res;

    }
};
