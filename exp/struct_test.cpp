#include<iostream>
#include<queue>
#include<string>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



queue<TreeNode*> qu;
TreeNode* root;
void insert(int val)
{
    if(root == nullptr) 
    {
        root = new TreeNode(val);
        qu.push(root);
    }
    else
    {
        TreeNode* node = new TreeNode(val);
        if(qu.front()->left == nullptr)
        {
            qu.front()->left = node;

        }
        else
        {
            qu.front()->right = node;
            qu.pop();
        }
        qu.push(node);

    }

}



string printTree(TreeNode* root)
{
  
    if (root == nullptr)
    {
        return "";
    }
    if(root->left == nullptr && root->right == nullptr)
    {
        return to_string(root->val);
    }
    if(root->right == nullptr)
    {
        return to_string(root->val) + "(" + printTree(root->left) + ")";
    }

    return "(" + to_string(root->left) + ")" + "(" + to_string(root->right) + ")";

}

string sanitize(string s)
{
    string f = "";
    for(int i = 0; i<s.length()-1;)
    {
        
        if(s[i] == '(' && s[i+1] == ')')
        {
            i = i+2;
        }
        else
        {
            f += s[i];
            i++;
        }
    }

    return f;
}

int main()
{

    int arr[] = {1, 2, 3, 4};
    int i = 0, l = 4;
    for(int i = 0; i<l; i++)
    {
        insert(arr[i]);
    }

    printTree(root);
    cout<<sanitize(s);
    
    // TreeNode* node = new TreeNode(5);
    // cout<<node->val;
    // node->val = 100;

    

    return 0;
}