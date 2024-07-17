#include <iostream>
#include <climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        maxPathSumHelper(root, maxSum);
        return maxSum;
    }

private:
    int maxPathSumHelper(TreeNode* node, int& maxSum) {
        if (node == nullptr) {
            return 0;
        }

        int leftSum = max(0, maxPathSumHelper(node->left, maxSum));
        int rightSum = max(0, maxPathSumHelper(node->right, maxSum));

        int currentPathSum = node->val + leftSum + rightSum;
        maxSum = max(maxSum, currentPathSum);

        return node->val + max(leftSum, rightSum);
    }
};

int main() {
    // Example input:
    // Construct the binary tree: 1, 2, 3
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    // Calculate the maximum path sum
    Solution solution;
    int result = solution.maxPathSum(root);

    // Print the result
    cout << "The maximum path sum is: " << result << endl;

    // Clean up
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}