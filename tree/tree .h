#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class treenode {
public:
    int data;
    vector<treenode *> children;

    explicit treenode(int data) {
        this->data = data;
    }
};

void print(treenode *node) {
    cout << node->data << " : ";
    for (auto &i : node->children) {
        cout << i->data << " ,";
    }
    cout << endl;
    for (auto &i : node->children) {
        print(i);
    }

}

treenode *input() {

    cout << "enter data of node";
    int data, j;
    cin >> data;
    treenode *node = new treenode(data);
    cout << "Enter number of cildren of " << data;
    cin >> j;
    for (int i = 0; i < j; ++i) {
        node->children.push_back(input());
    }
    return node;
}

queue<treenode *> waitinglist;

treenode *createnode(int data) {
    treenode *node = new treenode(data);
    return node;
}

void inputlevelwise(treenode **head) {
    int i, j;
    treenode *curr, *ptr;
    if ((*head) == nullptr) {
        cout << "Enter dta for head";
        cin >> i;
        (*head) = createnode(i);
        waitinglist.push((*head));
    }
    while (!waitinglist.empty()) {
        curr = waitinglist.front();
        waitinglist.pop();
        cout << "Enter number of children of " << curr->data << endl;
        cin >> j;
        for (int k = 0; k < j; ++k) {
            cout << "Enter dta " << k + 1 << " child " << endl;
            cin >> i;
            ptr = createnode(i);
            curr->children.push_back(ptr);
            waitinglist.push(ptr);
        }
    }
}

int height(treenode *head) {
    int ans = 1, temp, t1 = 0;
    for (auto &i : head->children) {
        temp = height(i);
        if (t1 < temp)
            t1 = temp;

    }
    return ans + t1;
}

int countnodes(treenode *head) {
    int ans = 1, temp = 0, t1 = 0;
    for (auto &i : head->children) {
        temp += countnodes(i);


    }
    return ans + temp;
}

void depthwiseprint(treenode *head, int &k) {
    if (k == 0) {
        cout << head->data << " ";
        return;
    }
    k--;
    for (auto &i:head->children) {
        depthwiseprint(i, k);
    }
}

int countleafnodes(treenode *head) {
    if (head->children.size() == 0) {
        return 1;
    }
    int value = 0;
    for (auto &i:head->children) {
        value += countleafnodes(i);
    }
    return value;
}

void postorder(treenode *head) {
    if (head->children.size() == 0) {
        cout << head->data << " ";
        return;
    }
    for (auto &i:head->children) {
        postorder(i);
    }
    cout << head->data << " ";
}

void deletetree(treenode **head) {
    if ((*head)->children.empty()) {
        delete (*head);
        return;
    }
    for (auto &i:(*head)->children) {
        deletetree(&i);
    }
    delete (*head);

}

bool searchelement(treenode *head, int data) {
    if (head->data == data)
        return true;
    bool v;
    for (auto &i:head->children) {
        v = searchelement(i, data);
        if (v)
            return true;

    }
    return v;
}

void maxsumcount(treenode *root, treenode **res, int *sum) {
    if (root == nullptr)
        return;
    int csum = root->data;
    for (auto &i:root->children) {
        csum = csum + i->data;
        maxsumcount(i, res, sum);
    }
    if (csum > (*sum)) {
        (*sum) = csum;
        *res = root;
    }
}

int data;

bool coccurrent_check(treenode *root1, treenode *root2) {
    if (root1->data != root2->data)
        return false;
    if (root1->children.size() != root2->children.size())
        return false;
    for (int i = 0; i < root1->children.size(); ++i) {
        if (!(root1->children[i], root2->children[i]))
            return false;
    }
    return true;
}

void greaterthann(treenode *root, treenode **ptr, int *n) {
    if (root == nullptr)
        return;

    for (auto &i:root->children) {
        greaterthann(i, ptr, n);
    }
    if (root->data > data && root->data < (*n)) {
        *ptr = root;
        *n = root->data;
    }

}

void depth(treenode *root, int n) { //replaces root data with its depth
    if (root == nullptr)
        return;
    (root)->data = n;
    n++;
    for (auto &i:(root)->children) {
        depth(i, n);
    }

}

void sc(treenode *root, treenode *second, treenode *first) {
    if (root == nullptr)
        return;
    for (auto &i:root->children) {
        sc(i, second, first);
    }
    if (root->data > second->data) {
        if (root->data > first->data) {
            second->data = first->data;
            first->data = root->data;
        } else {
            second->data = root->data;
        }
    }

}

treenode *secondgreater(treenode *root) {
    auto *first=new treenode(INT32_MIN);
    auto*second=new treenode(INT32_MIN);
    sc(root, second, first);
    return second;

}