#include <bits/stdc++.h>
#include <bitset>
using namespace std;
int setbits(int *i){
    int j=0;
    while((*i)){
        (*i)=((*i)&((*i)-1));
        j++;
    }
    return j;
}
int main(){
    int i=379;
    cout<<setbits(&i);
}