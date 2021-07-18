#include <bits/stdc++.h>

using namespace std;
void ksort(int data[],int l,int k){
    if (l==0)
        return;
    priority_queue<int>q1;
    for (int i = 0; i < k; ++i) {
        q1.push(data[i]);
    }
    int j=0;
    for (int i = k; i < l; ++i) {
        data[j++]=q1.top();
        q1.pop();
        q1.push(data[i]);
    }
    j--;
    while (!q1.empty()) {
        data[j]=q1.top();
        q1.pop();
    }
}
int main(){
int i,j,k;
cout<<"Enter strength of an array "<<endl;
cin>>i;
int data[i];
    for (int j = 0; j < i; ++j) {
        cin>>k;
        data[j]=k;
    }
    cout<<"Enter k value"<<endl;

    cin>>k;
    ksort(data,i,k);
    for (int l = 0; l < i; ++l) {
        cout<<data[l]<<endl;
    }

}