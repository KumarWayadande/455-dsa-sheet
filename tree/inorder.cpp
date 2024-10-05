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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nums;
        stack<TreeNode *> stack1;
        TreeNode *current = root;

        while(current != nullptr){
            while(current != nullptr){
                stack1.push(current);
                current = current -> left;
            }

            while(current == nullptr && !stack1.empty()){
                TreeNode * node = stack1.top();
                stack1.pop();
                nums.insert(nums.end(), node->val);
                if(node -> right != nullptr){
                    current = node -> right;
                }
            }
        }

        // while (current != nullptr)
        // {
        //     stack.push(current);
        //     current = current->left;

        //     if (current == nullptr)
        //     {
        //         while (!stack.empty())
        //         {
        //             TreeNode *node = stack.top();
        //             stack.pop();
        //             nums.insert(nums.end(), node->val);
        //             if (node->right != nullptr)
        //             {
        //                 current = node->right;
        //                 break;
        //             }
        //         }
        //     }

        // }
            
        return nums;
    }
};