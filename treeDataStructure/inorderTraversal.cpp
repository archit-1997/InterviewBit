
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void inorder(vector<int> &ans, TreeNode* root){
    if(root==NULL)
        return;
    
    inorder(ans,root->left);
    
    ans.push_back(root->val);
    
    inorder(ans,root->right);
    
 }
 
vector<int> Solution::inorderTraversal(TreeNode* A) {
    
    vector<int> ans;
    
    inorder(ans,A);
    
    return ans;
}
