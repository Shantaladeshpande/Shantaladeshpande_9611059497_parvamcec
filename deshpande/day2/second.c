#include<stdio.h>
void main()
{
    int number=0;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number%3==0 && number%5==0)
    {
        printf("is a multiple of 3 and 5");
    }
    else
    {
        printf("is not a multiple of 3 and 5");
    }
}