#include <bits/stdc++.h>

using namespace std;
#include "C:\Users\Divyr\OneDrive\Desktop\summervacation codes\linked list\linkedlist.h"

class binarytreenode {
public:
    int data;
    binarytreenode *left;
    binarytreenode *right;

    explicit binarytreenode(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }

    void print() {
        if (this == nullptr)
            return;
        cout << this->data << endl;
        this->left->print();
        this->right->print();
    }


};

void preorder(binarytreenode *head) {
    if (head == nullptr)
        return;
    cout << head->data;
    preorder(head->left);
    preorder(head->right);
}

queue<binarytreenode *> que;

binarytreenode *input() {

    cout << "Enter data for this node" << endl;
    int data, k;
    cin >> data;
    binarytreenode *curr = new binarytreenode(data);
    binarytreenode *ptr = nullptr;
    que.push(curr);
    while (!que.empty()) {
        ptr = que.front();
        que.pop();
        cout << "Enter data for left node of " << ptr->data << endl;
        cin >> k;
        if (k != -1) {
            ptr->left = new binarytreenode(k);
            que.push(ptr->left);
        } else
            ptr->left = nullptr;
        cout << "Enter data for right node of " << ptr->data << endl;
        cin >> k;
        if (k != -1) {
            ptr->right = new binarytreenode(k);
            que.push(ptr->right);
        } else
            ptr->right = nullptr;
    }

    return curr;


}

int countnodes(binarytreenode *head) {
    if (head == nullptr)
        return 0;
    int count = 1;
    count += countnodes(head->right) + countnodes(head->left);
    return count;
}

bool ispresent(binarytreenode *head, int n) {
    if (head == nullptr)
        return false;
    if (head->data == n)
        return true;
    if (ispresent(head->left, n) || ispresent(head->right, n)) {
        return true;
    }
    return false;
}

void mirrortree(binarytreenode *head1) {
    if (head1 == nullptr) {
        return;
    }
    mirrortree(head1->left);
    mirrortree(head1->right);
    binarytreenode *curr = nullptr;
    curr = head1->left;
    head1->left = head1->right;
    head1->right = curr;
}

binarytreenode *
createnode(vector<int> inorder, vector<int> preorder, int inorderstart, int inorderend, int preorderstart,
           int preorderend) {
    if (inorderend < inorderstart)
        return nullptr;

    int rootindex, linstart, linend, lprestart, lpreend;
    int rinstart, rinend, rprestart, rpreend;


    for (int i = 0; i < inorder.size(); ++i) {
        if (inorder[i] == preorder[preorderstart]) {
            rootindex = i;
            break;
        }
    }
    int rootdata = inorder[rootindex];

    linstart = inorderstart;
    linend = rootindex - 1;
    lprestart = preorderstart + 1;
    lpreend = linend - linstart + lprestart;
    rinstart = rootindex + 1;
    rinend = inorderend;
    rprestart = lpreend + 1;
    rpreend = preorderend;
    auto *head = new binarytreenode(rootdata);
    head->left = createnode(inorder, preorder, linstart, linend, lprestart, lpreend);
    head->right = createnode(inorder, preorder, rinstart, rinend, rprestart, rpreend);
    return head;
}

int height(binarytreenode *head) {
    if (head == nullptr)
        return 0;
    return 1 + max(height(head->left), height(head->right));
}

bool balanced(binarytreenode *head) {
    if (head == nullptr)
        return true;
    int ld = 0, rd = 0;
    ld = height(head->left);
    rd = height(head->right);
    if (abs(ld - rd) <= 1 && balanced(head->right) && balanced(head->left))
        return true;
    return false;
}

void levelorderprinting(binarytreenode *head) {
    if (head == nullptr)
        return;
    que.push(head);

    binarytreenode *ptr = nullptr;
    while (!que.empty()) {
        ptr = que.front();
        que.pop();
        cout << ptr->data << endl;
        if (ptr->left) {
            que.push(ptr->left);

        }
        if (ptr->right) {
            que.push(ptr->right);

        }

    }
}

binarytreenode *deleteleaf(binarytreenode *head) {
    if (head == nullptr)
        return nullptr;
    if (head->right == nullptr && head->left == nullptr) {
        delete head;
        return nullptr;
    } else {
        head->left = deleteleaf(head->left);
        head->right = deleteleaf(head->right);
        return head;
    }
}

//BINARY SEARCH TREE

binarytreenode *bstsearch(binarytreenode *head, int i) {
    if (head == nullptr)
        return nullptr;
    if (head->data == i)
        return head;
    if (head->data < i) {
        return bstsearch(head->right, i);
    } else

        return bstsearch(head->left, i);
}

void print_in_range_bst(binarytreenode *head, int ll, int ul) {
    if (head == nullptr)
        return;
    if (head->data <= ul && head->data >= ll) {
        cout << head->data << " ";
        print_in_range_bst(head->left, ll, ul);
        print_in_range_bst(head->right, ll, ul);
        return;
    }
    if (head->data < ll) {
        print_in_range_bst(head->right, ll, ul);
        return;
    }
    print_in_range_bst(head->left, ll, ul);


}

int maxdata(binarytreenode *head) {
    if (head == nullptr)
        return INT32_MIN;
    int lmax = maxdata(head->left);
    int rmax = maxdata(head->right);
    return max(head->data, max(lmax, rmax));

}

int mindata(binarytreenode *head) {
    if (head == nullptr)
        return INT32_MAX;
    int lmin = mindata(head->left);
    int rmin = mindata(head->right);
    return min(head->data, min(lmin, rmin));

}

bool checkbst(binarytreenode *head) {
    if (head == nullptr)
        return true;
    if (head->data > maxdata(head->left) && head->data < mindata(head->right)) {
        if (checkbst(head->left) && checkbst(head->right))
            return true;
    }
    return false;
}

class checkbstret {
public:
    int min, max;
    bool isbst;
};

checkbstret checkbst2(binarytreenode *head) {
    if (head == nullptr) {
        checkbstret ret;
        ret.min = INT32_MAX;
        ret.max = INT32_MIN;
        ret.isbst = true;
        return ret;
    }
    checkbstret ret;
    checkbstret leftouput = checkbst2(head->left);
    checkbstret rightoutput = checkbst2(head->right);
    ret.min = min(head->data, min(leftouput.min, rightoutput.min));
    ret.max = max(head->data, max(leftouput.max, rightoutput.max));
    if (head->data >= leftouput.max && head->data <= rightoutput.min && leftouput.isbst && rightoutput.isbst)
        ret.isbst = true;
    else
        ret.isbst = false;
    return ret;

}

binarytreenode *construct_bst(vector<int> arr, int arrstart, int arrend) {
    if (arr.empty())
        return nullptr;
    int c;
    if ((arrend - arrstart) % 2 != 0) {
        c = arr.size() / 2;
        c -= 1;
    } else
        c = arr.size() / 2;
    binarytreenode *head = new binarytreenode(arr[c]);
    head->left = construct_bst(arr, 0, c - 1);
    head->right = construct_bst(arr, c + 1, arr.size() - 1);
    return head;
}
