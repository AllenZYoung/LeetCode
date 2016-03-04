/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
  TreeNode* sortedArrayToBST(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return NULL;
    if (n == 1) return new TreeNode(nums[0]);
    int mid = n/2;
    TreeNode * root = new TreeNode(nums[mid]);

    std::vector<int> LeftNodes(nums.begin(), nums.begin() + mid);
    std::vector<int> RightNodes(nums.begin() + mid + 1, nums.end());
    root->left = sortedArrayToBST(LeftNodes);
    root->right = sortedArrayToBST(RightNodes);
    return root; 
  }
};