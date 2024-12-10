#include<stdio.h>
void bankTransfer(int *accountBalance1,int *accountBalance2,int amt)
{
    *accountBalance1=(*accountBalance1)-amt;
    *accountBalance2=(*accountBalance2)+amt;
}
int main()
{
    int balance1=0,balance2=0,amount=0;
    printf("Enter balance in account1:");
    scanf("%d",&balance1);
    printf("Enter balance in account2:");
    scanf("%d",&balance2);

}