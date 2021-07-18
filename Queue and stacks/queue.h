


#include <iostream>
#define max 100
using namespace std;
class queue{

public:
    char data[max],index=-1;
    bool empty(){
        if(index==-1)
            return true;
        else
            return false;
    }
    bool pop(char *a){
        if (index==-1)
            return false;
        else
        {
            *a=data[0];
            for (int i = 1; i <=index; ++i) {
                data[i-1]=data[i];
            }
            index--;
            return true;
        }

    }
    bool push(char *a){
        if (index>=max-1)
        {
            cout<<"overflow"<<endl;
            return false;
        }
        index++;
        data[index]=*a;
       // cout<<"pushed succesfully"<<endl;
        return true;
    }
    bool front(int*a){
        if (index==-1){
            cout<<"No element present !"<<endl;
            return false;
        }
        *a=data[index];
        return true;
    }

};
class stack{
public:
    char data[max], index=-1;
    bool empty(){
        if(index==-1)
            return true;
        else
            return false;
    }
    bool push(char *a){
        if (index>=max-1)
        {
            cout<<"overflow"<<endl;
            return false;
        }
        index++;
        data[index]=*a;
        return true;
    }
    bool pop(char *a){
        if (index==-1)
        {
            //cout<<"Underflow !"<<endl;
            return false;
        }
        else
        {
            *a=data[index];
            index--;
            return true;
        }

    }

};