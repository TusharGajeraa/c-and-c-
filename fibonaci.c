#include<stdio.h>

int main()
{
    int f=0,s=1,next,i,no;
    printf("Enter number of terms=");
    scanf("%d",&no);
    printf("first %d terms of fibonacci series",no);
    for(i=1;i<no;i++)
    {
        if(i<=1)
        {
            next=i;
        }
        else
        {
            next=f+s;
            f=s;
            s=next;
        }
        printf("%d",next);
    }
    return 0;
}
