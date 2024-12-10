#include<stdio.h>
void swapbyreferance(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}
void swapbyvalue(int a,int b)
{
    int c=a;
    a=b;
    b=c;
}
int main()
{
    int x=10,y=20;
    printf("Before the swap x=%dand y=%d\n",x,y);
    swapbyreferance(&x,&y);
    printf("After the swap x=%d and y=%d",x,y);
}