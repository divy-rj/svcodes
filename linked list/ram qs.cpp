#include <bits/stdc++.h>

using namespace std;
class node{
public:
    int data;
    node*next;
   explicit node(int data){
       this->data=data;
       next= nullptr;
    }
};
void createlist(node **head) {
    cout << "enter size of list";
    int j, n;
    node *curr = nullptr, *pre = nullptr;
    cin >> j;
    for (int i = 0; i < j; ++i) {
        if ((*head) == nullptr) {
            cout << "Enter data :";
            cin >> n;
            curr = new node(n);
            (*head) =curr;
            pre = curr;

        } else {
            cout << "Enter data :";
            cin >> n;
            curr = new node(n);
            pre->next= curr;
            pre = curr;


        }
    }
}
node* rotateRight(node* head, int k){
    node*curr,*ptr;
    int len=0;
    if(head== nullptr)
        return nullptr;
    if(head->next== nullptr)
        return head;
    for(curr=head;curr!= nullptr;curr=curr->next)
        len++;
    cout<<"length "<<len<<endl;
    for(int i=0;i<k;i++){
        for(curr=head;curr->next->next!= nullptr;curr=curr->next);
        ptr=curr->next;
        curr->next= nullptr;
        ptr->next=head;
        head=ptr;
    }
    return head;
}

 void oddEvenList(node **head) {
    node *ptr, *qtr, *rtr = nullptr, *str;
    ptr = *head;

    rtr=qtr=ptr->next;
    while(rtr->next!= nullptr&&ptr->next!= nullptr){
        ptr->next=rtr->next;
        ptr=ptr->next;
        if (rtr->next->next!= nullptr){
            rtr->next=ptr->next;
            rtr=rtr->next;
        }
    }
    rtr->next= nullptr;
    ptr->next=qtr;


}
int main(){
    node*head= nullptr,*curr;
    createlist(&head);
    cout<<"Reversing";
   curr= rotateRight(head,2);
    for (node*ptr=curr;ptr!= nullptr;ptr=ptr->next) {
        cout<<ptr->data<<" ";
    }

}