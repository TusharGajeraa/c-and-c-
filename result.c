#include<stdio.h>
#include<conio.h>


 int main()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter first number:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value after swapping");
    printf("value of A %d",a);
    printf("value of B %d",b);
    getch();
}



