#include <string>
#include "queue.h"
bool check(stack*s,string*s1){
    char ch;
    while (s->pop(&ch)){
        *s1=*s1+ch;
    }
    return true;
}
int main(){
    cout<<"enyet your string";
    string s;
    getline(cin,s);
    stack s1;
    for(char &i:s){
        s1.push(&i);
    }
    s="";
    check(&s1,&s);
    cout<<s;
}