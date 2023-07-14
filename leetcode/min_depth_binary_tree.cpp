//Given a binary tree, find its minimum depth.

//The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

//Note: A leaf is a node with no children.


#include <bits/stdc++.h>
using namespace std;

class Solution {

public:
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        
        if (left == 0 || right == 0) {
            return left + right + 1;
        }
        return min(left, right) + 1;
    }
};

int main() {
    
    return 0;
}