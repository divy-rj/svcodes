#include <bits/stdc++.h>


using namespace std;
void swap(int&i,int&j){
    int temp=i;
    i=j;
    j=temp;

}
void *quicksort(int s, int l, int arr[]) {
    if (l == 1)
        return arr;
    int p = s;
    int i, j;
    i = s + 1;
    j = s + l - 1;
    bool sw = true;
    while (sw) {
        sw= false;
        while (i<s+l&&i<=j){
            if (arr[i]>arr[p]){
                break;
            }
            i++;
        }
        while (j>s){
            if (arr[j]<arr[p])
                break;
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
            sw= true;
        } else{
            swap(arr[s],arr[j]);
            sw= false;
            p=j;
        }
    }
    for (int k = 0; k < 7; ++k) {
        cout<<arr[k]<<"   ";
    }
    j=l-j-1;
    quicksort(s,j,arr);
    quicksort(s+j+1,l,arr);



}

int main() {
    int arr[]={11,15,5,7,13,1,19};
    cout<<"Sorting";
    quicksort(0,7,arr);

    return 0;
}
