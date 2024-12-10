#include<stdio.h>
void main()
{
    int number=0;
    int number1=0;
    printf("Enter a number:");
    scanf("%d",&number);
    printf("Enter another number:");
    scanf("%d",&number1);
    if(number==number1)
    {
        printf("both are equal");
    }
    else
    {
        printf("both are not equal");
    }
}