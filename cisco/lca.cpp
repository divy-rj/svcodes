#include "../tree/binary tree/binary tree.h"
binarytreenode*ptr;
binarytreenode*lca(binarytreenode*root,int i,int j){
    if(root== nullptr)
        return nullptr;
    bool t;
    binarytreenode*rptr= nullptr,*lptr= nullptr;
    if ((root->data==i)||root->data==j){
        t= true;
}
    if (t)
        return root;

        rptr=lca(root->right,i,j);
        lptr= lca(root->left,i,j);
        if(lptr&&rptr)
        {
            return root;
        }
    if (rptr)
        return rptr;
    return lptr;


}