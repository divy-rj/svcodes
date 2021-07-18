#include "C:\Users\Divyr\OneDrive\Desktop\summervacation codes\tree\binary tree\binary tree.h"
vector <int> zigZagTraversal(binarytreenode* root)
{   vector <int> res;
    stack<binarytreenode*> f1,s1;
    int i,j;
    binarytreenode*ptr;
    f1.push(root);
    while(!f1.empty() || !s1.empty()){
        while(!f1.empty()){
            ptr=f1.top();
            res.push_back(ptr->data);
            s1.push(ptr->left);
            s1.push(ptr->right);
            f1.pop();
        }
        while(!s1.empty()){
            ptr=s1.top();
            res.push_back(ptr->data);
            if(ptr->right)
                f1.push(ptr->right);
            if(ptr->left)
                f1.push(ptr->left);
            s1.pop();
        }
    }
    return res;

}
int main(){
    binarytreenode*root= nullptr;
    root=input();
    vector<int>r= zigZagTraversal(root);
    for(int &i:r)
        cout<<i;
}