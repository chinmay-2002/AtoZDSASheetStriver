class Solution {
public:
    void ans(TreeNode* root, vector<int> &v){
        if(root==NULL){
            return ;
        }
        v.push_back(root->val);
        ans(root->left, v);
        ans(root->right, v);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        ans(root,v);
        return v;
    }
};