#include <iostream>
using namespace std;
struct twostack{
    int index1,index2;
    int*a;
};
bool push(twostack*s,int i,int*arr){
    if (!(i==1 || i==2))
        return false;
    if (i==1){
        if (s->index1+1==s->index2)
            return false;
        s->index1++;
        s->a[s->index1]=*arr;
        return true;

    }
    if (s->index2 - 1 == s->index1)
        return false;
    s->index2--;
    s->a[s->index2] = *arr;
    return true;
}
bool pop(twostack*s,int i,int *arr,int l){
    if (!(i==1 || i==2))
        return false;
    if (i==1){
        if (s->index1==-1)
            return false;
        *arr=s->a[s->index1];
        s->index1--;
        return true;

    }

    if (s->index2 >= l)
        return false;
    *arr=s->a[s->index2];
    s->index2++;
    return true;

}
int main(){
    cout<<"Enter size of an array"<<endl;
    int l;
    int*ab;
    cin>>l;
    twostack s;
    s.a=new int[l];
    s.index1=-1;
    s.index2=l;
    for (int i = 0; i < 53; ++i) {
        push(&s,(i%2)+1,&i);
    }
    cout<<"printing whole array"<<endl;
    for (int i = 0; i < l; ++i) {
        cout<<s.a[i]<<" ";
    }
    printf("\n");
    for (int i = 0; i < 30; ++i) {
        pop(&s,(i%2)+1,ab,l);
        cout<<*ab<<" from "<<(i%2)+1<<endl;
    }
}