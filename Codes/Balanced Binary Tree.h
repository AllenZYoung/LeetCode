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
	int Depth(TreeNode* root) {
		if (root == NULL) return 0;
		int Left = Depth(root->left);
		int Right = Depth(root->right);
		return (Left+1) > (Right+1) ? (Left+1) : (Right+1);
	}
  bool isBalanced(TreeNode* root) {
  	if (root == NULL) return 1;
  	int Left = Depth(root->left);
  	int Right = Depth(root->right);
  	int diff = Left - Right;
  	if (diff > 1 || diff < -1) return 0;
  	return isBalanced(root->left) && isBalanced(root->right);
  }
};
