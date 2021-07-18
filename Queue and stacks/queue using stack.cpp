#include "queue.h"
bool queue_using_stack_pop(stack*s1,stack*s2,int*a){
    if (s1->index==-1)
    {
        return false;
    }
    int b;
    while(s1->pop(&b)){
        s2->push(&b);
    }
    s2->pop(a);
    while(s2->pop(&b)){
        s1->push(&b);
    }
    return true;
}
int main(){
    stack s1,s2;
    int j;
    for (int i = 0; i < 47; ++i) {
        s1.push(&i);
    }
    while (queue_using_stack_pop(&s1,&s2,&j)){
        cout<<j<<endl;
    }
}