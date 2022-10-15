#include<stdio.h>

int main()
{
    int a[5],i;
    printf("Enter array element: ");

    for(i=1;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n  array element:  ");
    for(i=1;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}
