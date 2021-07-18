#include <iostream>

using namespace std;
class queue{
    int front ,rear,strength;
    int *data;
public:
    queue(){
        data=new int[100];
        rear=front=0;
        strength=100;
    }
    explicit queue(int i){
        data=new int[i];
        rear=front=0;
        strength=i;
    }
    bool enqueue(int i){
        if ((front-rear)==1 || (rear-front)==strength-1){
            return false;
        }
        if (rear<strength-1){
            data[rear]=i;
            rear++;
            return true;
        }
        if (rear==strength-1){
            data[rear]=i;
            rear=0;
            return true;
        }
        return false;
    }
    bool dequeue(int *i){
        if (rear==front)
            return false;
        if (front<strength-1){
            *i=data[front];
            front++;
            return true;
        }
        if (front==strength-1){
            *i=data[front];
            front=0;
            return true;
        }
        return false;
    }
    bool empty(){
        if (rear==front)
            return true;
        return false;
    }
};
int main(){
    int length,i=0;
    cout<<"enter length of a queue"<<endl;
    cin>>length;
    queue q(length);
    q.enqueue(1);
    q.enqueue(5);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(7);

    cout<<"dequeued items !"<<endl;
    q.dequeue(&i);
    cout<<i<<endl;
    q.dequeue(&i);
    cout<<i<<endl;
    q.dequeue(&i);
    cout<<i<<endl;
    q.dequeue(&i);
    cout<<i<<endl;

    cout<<"again enqueuing 8 & 9"<<endl;
    q.enqueue(8);
    q.enqueue(9);
    cout<<"dequeued items !"<<endl;

    q.dequeue(&i);
    cout<<i<<endl;
    i=88;
    q.dequeue(&i);
    cout<<i<<endl;
    q.dequeue(&i);
    cout<<i<<endl;
//    q.dequeue(&i);
//    cout<<i<<endl;
}