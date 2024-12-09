#include<stdio.h>
void main()
{
    int rows=0;
    printf("Enter row number:");
    scanf("%d",&rows);
    int spc=rows+4-1;
    for(int i=1;i<=rows;i++)
    {
        for(int j=spc;j>0;j--)
        {
            printf("-");
        }
        for(int j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
        spc--;5
        
    }
}