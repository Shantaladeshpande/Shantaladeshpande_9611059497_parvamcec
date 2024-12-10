#include<stdio.h>
int main()
{
    char str[100];
    int length=0;
    int digitcount=0;
    int alphacount=0;
    int symbcount=0;
    printf("Enter string:\n");
    fgets(str,sizeof str,stdin);
    while(str[length]!='\0')
    {
        length++;
    }
    for(int i=0;i<length-1;i++)
    {
        if((str[i]>='A'&& str[i]<='Z')||(str[i]<'Z'))
        {
            alphacount++;
        }
        else if(str[i]>='0'&& str[i]<='9')
        {
            digitcount++;
        }
        else
        {
            symbcount++;
        }
    }
    printf("No of alphabets in a string is:%d\n No. of digits in a string is:%d\nNo. of symbols in a string:");
    return 0;
}