#include "queue.h"

bool stack_using_queue_pop(queue *q1, queue *q2, int *i) {
    if (q1->index == -1)
        return false;
    int a;
    while(q1->pop(&a)&&q1->index>=0){
        q2->push(&a);
    }
    q1->pop(&a);
    *i=a;
    queue q3;
    q3=*q1;
    *q1=*q2;
    *q2=q3;
    return true;
}
int main(){
  queue q1,q2;
    for (int i = 0; i < 43; ++i) {
        q1.push(&i);
    }
    int a;
    while (stack_using_queue_pop(&q1,&q2,&a)){
        cout<<a<<endl;
    }

}