#include <bits/stdc++.h>

using namespace std;

class node {
public:
    int data;
    node *next = nullptr;

    explicit node(int data) {
        this->data = data;
        next = nullptr;
    }
};

class specialnode {
public:
    int data;
    specialnode *nextsp = nullptr;
    node *next = nullptr;

    explicit specialnode(int data) {
        this->data = data;
        nextsp = nullptr;
        next = nullptr;
    }
};


void createlist(specialnode **head) {
    cout << "enter size of list";
    int j, n;
    node *curr = nullptr, *pre = nullptr;
    cin >> j;
    for (int i = 0; i < j; ++i) {
        if ((*head)->next == nullptr) {
            cout << "Enter data :";
            cin >> n;
            curr = new node(n);
            (*head)->next = curr;
            pre = curr;

        } else {
            cout << "Enter data :";
            cin >> n;
            curr = new node(n);
            pre->next = curr;
            pre = curr;


        }
    }
}





int main() {
    specialnode *sphead = nullptr, *curr;
    node *ptr;
    createslist(&sphead);

    for (curr = sphead; curr != nullptr; curr = curr->nextsp) {
        cout << "chained list of " << curr->data << endl;
        createlist(&curr);
    }
//    for (curr = sphead; curr != nullptr; curr = curr->nextsp) {
//        cout << "head node" << curr->data;
//        for (ptr = curr->next; ptr != nullptr; ptr = ptr->next) {
//            cout << "chained node " << ptr->data << " ";
//        }
//        cout << endl;
//    }
curr=

}