#include <iostream>
#include <bitset>
//

using namespace std;
int main(){
    int i,k;
    cout<<"Enter the number of elements of an array"<<endl;
    cin>>i;
    int data[i];
    bitset<32>bits[i];
    bitset<32>xorr(0),ki(0);
    int temp=0;
    for (int j = 0; j < i; ++j) {
        cin>>k;
        bits[j]=k;
    }
    for (int j = 0; j < i; ++j) {
        xorr=xorr xor bits[j];
    }
    k=(int)xorr.to_ulong();
    temp=k & ~( k - 1);
    xorr=0;
    for (int j = 0; j < i; ++j) {
        if ((int)bits[j].to_ulong() & temp){
            xorr=xorr xor bits[j];
        }
        ki=ki xor bits[j];

    }
cout<<xorr.to_ulong()<<endl;
    cout<<ki.to_ulong()<<endl;



}