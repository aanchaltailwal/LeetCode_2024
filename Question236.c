/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if(root==NULL || root==p || root==q){
        return root;
    }
    struct TreeNode* lst = lowestCommonAncestor(root->left,p,q);
    struct TreeNode* rst = lowestCommonAncestor(root-> right,p,q);

    if(!lst)return rst;
    if(!rst)return lst;
        return root;
    
}