/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSametree(struct TreeNode* s, struct TreeNode* t) {
    if(!s && !t) return true;
    if(!s || !t) return false;
    if(s->val != t->val) return false;
    return isSametree(s->left, t->left) && isSametree(s->right, t->right);
}

bool isSubtree(struct TreeNode* s, struct TreeNode* t){
    if(!t) return true;
    if(!s) return false;
    if(isSametree(s, t)) return true;
    return isSubtree(s->left, t) || isSubtree(s->right, t);
}
