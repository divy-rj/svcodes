#include "binary tree.h"
#include <bits/stdc++.h>

unordered_set<int> nodes;

void insertion_in_set(binarytreenode *root) {
    if (root == nullptr)
        return;
    insertion_in_set(root->left);
    insertion_in_set(root->right);
    nodes.insert(root->data);
}

void pair_sum(binarytreenode *root, int sum) {
    if (root == nullptr)
        return;
    int r = sum - root->data;
    if (!(nodes.find(r) == nodes.end())) {
        cout << root->data << " " << r << endl;
    }
    pair_sum(root->left, sum);
    pair_sum(root->right, sum);


}

int main() {
    binarytreenode *root = input();
    insertion_in_set(root);
    int sum;
    cout << "sum = ";
    cin >> sum;
    pair_sum(root,sum);
}