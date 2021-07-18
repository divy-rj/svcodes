#include "binary tree.h"

using namespace std;
node *ptr, *rtr;

void getlist(binarytreenode *root, node **head, node **tail) {
    if (root == nullptr) {
        head = nullptr;
        tail = nullptr;
        return;
    }
    getlist(root->left, head, tail);
    if (*head == nullptr) {
       * head = new node(root->data);
        ptr = *head;
        *tail = *head;
    } else{
        rtr = new node(root->data);
        ptr->next = rtr;
        ptr = rtr;
        *tail = ptr;
    }
    getlist(root->right, head, tail);
}
void bst_to_list(binarytreenode*root){
    node*lhead= nullptr,*ltail;
    node*rhead= nullptr,*rtail;
    getlist(root->left,&lhead,&ltail);
    getlist(root->right,&rhead,&rtail);
    node*ptr=new node(root->data);
    ltail->next=ptr;
    ptr->next=rhead;
    print_list(lhead);



}
int main(){
    binarytreenode* root=input();
    bst_to_list(root);
}