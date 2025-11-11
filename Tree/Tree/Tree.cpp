#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int data;
    vector<TreeNode*> children;

    TreeNode(int val) {
        data = val;
    }
};

TreeNode* buildTree() {
    int val, n;
    cout << "Enter node value: ";
    cin >> val;
    TreeNode* root = new TreeNode(val);

    cout << "Enter number of children of " << val << ": ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter child " << i + 1 << " of " << val << ":\n";
        root->children.push_back(buildTree());
    }
    return root;
}

void printTree(TreeNode* root) {
    if (!root) return;
    cout << root->data << ": ";
    for (auto child : root->children)
        cout << child->data << " ";
    cout << endl;

    for (auto child : root->children)
        printTree(child);
}

int main() {
    TreeNode* root = buildTree();
    cout << "\nTree structure:\n";
    printTree(root);
    return 0;
}
