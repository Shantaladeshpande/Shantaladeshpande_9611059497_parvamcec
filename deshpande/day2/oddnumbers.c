#include<stdio.h>
int main()
{
    int i;
    printf("Enter range:");
    scanf("%d",&i);
    for(int k=1;k<=i;k++)
    {
        if(k%2!=0)
        {
            printf("%d\n",k);
        }
    }
    return 0;

}