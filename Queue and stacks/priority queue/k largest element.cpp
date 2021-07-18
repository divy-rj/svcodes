#include <bits/stdc++.h>

using namespace std;
vector<int> k_largest_elements(int data[],int l,int k){
    priority_queue<int,vector<int>,greater<>> q;
    vector<int>q1;
    if(l==0)
        return q1;
    for (int i = 0; i < k; ++i) {
        q.push(data[i]);
    }
    for (int i = k; i < l; ++i) {
        if (q.top()<data[i]){
            q.pop();
            q.push(data[i]);
        }
    }
    while (!q.empty()){
        q1.push_back(q.top());
        q.pop();
    }
    return q1;

}

int main(){
    int i,j,k;
    vector<int>q;
    cout<<"Enter strength of an array "<<endl;
    cin>>i;
    int data[i];
    for (int j = 0; j < i; ++j) {
        cin>>k;
        data[j]=k;
    }
    cout<<"Enter k value"<<endl;

    cin>>k;
    q= k_largest_elements(data,i,k);
    for(int&l:q)
        cout<<l<<endl;

}
