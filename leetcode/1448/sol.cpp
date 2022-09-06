#include<iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right): val(x), left(left), right(right) {}

};
int totalGoodNodes = 0;

void preorder(TreeNode* node, int max_in_path)
{
    if(node != nullptr)
    {
        if(node->val>=max_in_path)
        {
            totalGoodNodes++;
            max_in_path = node->val;
        }
        preorder(node->left, max_in_path);
        preorder(node->right, max_in_path);
        // if(node->right!=nullptr && node->right->val>node->val)
        // {
        //     totalGoodNodes++;
        // }
        // if(node->left!=nullptr && node->left->val>node->val)
        // {
        //     totalGoodNodes++;
        // }
        
       
    }
    else
    {
        return;
    }

}

int goodNodes(TreeNode* root)
{
    

        
}

int main()
{
    TreeNode node(5, nullptr, nullptr);
    cout<<node.val;


    return 0;
}