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
    bool isSametree(TreeNode* s, TreeNode* t) {
        if(!s and !t) return true;
        if(!s or !t) return false;
        if(s->val != t->val) return false;
        return isSametree(s->left, t->left) && isSametree(s->right, t->right);
    }
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!t) return true;
        if(!s) return false;
        if(isSametree(s, t)) return true;
        return isSubtree(s->left, t) or isSubtree(s->right, t);
    }
};
