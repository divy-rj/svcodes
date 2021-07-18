//
// Created by Divyr on 6/28/2021.
//

#ifndef SUMMERVACATION_CODES_PRIORITY_QUEUE_H
#define SUMMERVACATION_CODES_PRIORITY_QUEUE_H

#include <bits/stdc++.h>

using namespace std;

class Min_Priority_Queue {
    vector<int> data;
public:

    bool empty() {
        return data.empty();
    }
    bool resize(int l){
        this->data.resize(l);
        return true;
    }

    bool top(int *i) {
        if (this->empty())
            return false;
        *i = data[0];
        return true;
    }
    int size(){
        return data.size();
    }
    void swap(int&i,int&j){
        i=i^j;
        j=i^j;
        i=i^j;
    }
    bool pop(){
        if(this->empty())
            return false;
        int i=0,lc,rc,min;
        int size= this->size()-1;
        swap(data[0],data[size]);
        data.pop_back();
        size--;
        lc=i*2+1;
        rc=i*2+2;
        while (lc<=size&&rc<=size){

           if(data[lc]>data[rc])
           {
               swap(data[i],data[rc]);
               i=rc;
           }
           else
           {
               swap(data[i],data[lc]);
               i=lc;
           }
            lc=i*2+1;
            rc=i*2+2;

        }
        return true;
    }
    bool push(int i) {
        data.push_back(i);
        int index = data.size() - 1;
        if (index == 0)
            return true;
        int p;

        while (index > 0) {
            p = (index - 1) / 2;
            if (data[p] > data[index]) {
                swap(data[p],data[index]);
            }
            index = p;


        }
        return true;

    }

};

#endif //SUMMERVACATION_CODES_PRIORITY_QUEUE_H
