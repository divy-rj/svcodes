#include "binary tree.h"

vector<int> data;
bool path_in_a_tree(binarytreenode*root,int i){
    if (root== nullptr)
        return false;
    if (root->data==i)
    {
        data.push_back(i);
        return true;
    }
    if (path_in_a_tree(root->left,i)){
        data.push_back(root->data);
        return true;
    }
    if (path_in_a_tree(root->right,i)){
        data.push_back(root->data);
        return true;
    }
    return false;
}
int main(){
    binarytreenode*root=input();
    path_in_a_tree(root,2);
    for(auto &i:data)
        cout<<i<<" ";
}