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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> nums;
        stack<TreeNode *> stack1;
        TreeNode *current = root;

        if(root == nullptr){
            return nums;
        }

        while(current != nullptr || !stack1.empty()){

            if(current == nullptr){
                current = stack1.top();
                stack1.pop();
            }

            nums.insert(nums.end(), current->val);
            if(current->right != nullptr)
                stack1.push(current->right);
            
            current = current -> left;
        }

        // while (current != nullptr || !stack.empty())
        // {
        //     if (current == nullptr)
        //     {
        //         current = stack.top();
        //         stack.pop();
        //     }

        //     nums.insert(nums.end(), current->val);
        //     if (current->right)
        //         stack.push(current->right);

        //     current = current->left;
        // }
        return nums;
    }
};