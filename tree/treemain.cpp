#include "tree .h"

int main() {
    treenode *root = nullptr;
    int k = INT32_MAX;
    inputlevelwise(&root);
    treenode *res = secondgreater(root);
    cout << "Res data" << res->data;


}
// 1 2 2 3 2 4 5 2 6 7 0 0 0 0