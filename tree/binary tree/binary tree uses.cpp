#include "binary tree.h"

int main() {
    binarytreenode *n,*h;
    n = input();
    checkbstret r=checkbst2(n);
    if (r.isbst)
        cout<<"truee";
    else
        cout<<"False";
}