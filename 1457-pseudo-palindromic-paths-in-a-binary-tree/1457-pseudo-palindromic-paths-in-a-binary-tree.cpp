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
    int cnt = 0;
   void trav(TreeNode* node, int mp[]) {
        if (node == nullptr) return;
        
        mp[node->val]++;
        
        // Check if it's a leaf node
        if (node->left == nullptr && node->right == nullptr) {
            int oddCount = 0;
            for (int i = 1; i <= 9; i++) {
                if (mp[i] % 2 != 0) {
                    oddCount++;
                    if (oddCount > 1) break;
                }
            }
            if (oddCount <= 1) {
                cnt++;
            }
        } else {
            // Recursively call left and right children
            trav(node->left, mp);
            trav(node->right, mp);
        }

        
        mp[node->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) 
    {
        int mp[10] = {0};
        trav(root, mp);
        return cnt;
        
    }
};