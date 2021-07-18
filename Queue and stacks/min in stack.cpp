#include <iostream>

using namespace std;

class stack {
    int index, strength = 0, min = 0;
    int *data;
public:
    stack() {
        data = new int[100];
        strength = 100;
        index = -1;
    }

    explicit stack(int b) {
        data = new int[b];
        strength = b;
        index = -1;
    }

    bool pop(int *i) {
        if (index == -1)
            return false;
        if (data[index] >= min) {
            *i = data[index];
            index--;
            return true;
        }
        *i = min;
        min = 2 * data[index] - min;
        index--;
        return true;

    }

    bool push( int *i) {
        if (index >= strength)
            return false;
        if (*i >= min) {
            index++;
            data[index] = *i;
            return true;
        }
        index++;
        data[index] = 2 * (*i) - min;
        min = *i;
        return true;
    }
    bool minofstack(int *i){
        if (index==-1)
            return false;
        *i=min;
        return true;
    }
};
int main(){
    int l,k;
    cout<<"enter the strength of stack"<<endl;
    cin>>l;
    stack s(l);
    for (int i = 0; i < l-10; ++i) {
        cin>>k;
        s.push(&k);
    }

    s.minofstack(&l);
    cout<<l;
}