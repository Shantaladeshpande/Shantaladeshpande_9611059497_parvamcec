#include<stdio.h>
int main()
{
    int arr[5];
    printf("Enter 5 elements of array:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The original array is:[");
    for(int i=0;i<5;i++)
    {
        if(i<4)
        {
            printf("%d, ",arr[i]);
        }
        else
        {
            printf("%d",arr[i]);
        }
    }
    printf("]\n");
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    printf("The sum of of array elements is:%d",sum);
    return 0;
}