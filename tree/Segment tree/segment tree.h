//
// Created by Divyr on 6/28/2021.
//

#ifndef SUMMERVACATION_CODES_SEGMENT_TREE_H
#define SUMMERVACATION_CODES_SEGMENT_TREE_H
#include <bits/stdc++.h>

using namespace std;
int mid(int i,int j){
    return (i+(i+j)/2);
}
int*create_util(int arr[],int st[],inr ss,int se,int si){
    if(ss==se)
    {
        st[si]=arr[se];
        return st[si];
    }
    int m= mid(ss,se);
    st[si]= create_util(arr,st,ss,m,si*2+1)+ create_util(arr,st,m+1,se,si*2+2);
    return st[si];


}
void create_segmemt_tree(int arr[],int l){
    int x=int(ceil(log2(l)));
    int max=2*(int ) pow(2, x)-1;
    ibnt *st=new int[max];


}

#endif //SUMMERVACATION_CODES_SEGMENT_TREE_H
