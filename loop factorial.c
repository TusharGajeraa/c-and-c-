#include<stdio.h>

int main()
{
    int i,no,fact=1;
    printf("Enter a number:");
    scanf("%d",&no);
    for(i=no;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("factorial number is %d",fact);
    return 0;
}
