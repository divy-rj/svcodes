#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct pkt{
    char ch[8];
    int num1;
    int num2;
};
struct pkt1{
    char ch1;
    char ch2;
};
int main()
{

    struct pkt a={"Airplan",1,2};
    struct pkt1 b;
    char *ptr;
    ptr= reinterpret_cast<char *>(&a);
    for(int i=0;i<8;i++,ptr+2)
    {
        b.ch1=(int)*(ptr);
        b.ch2=(int)*(ptr+1);
        printf("%d %d",b.ch1,b.ch2);
        b.ch1=' ';
        b.ch2=' ';
    }
    return 0;
}