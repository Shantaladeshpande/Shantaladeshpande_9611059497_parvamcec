#include<stdio.h>
void main()
{
    int number=0;
    printf("Enter a number:");
    scanf("%d",&number);
    for(int i=0;i<=10;i++)
    {
        printf("%d*%d=%d\n",number,i,number*i);
    }
}