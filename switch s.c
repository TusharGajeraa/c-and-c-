#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c,ch;
printf("1-addition");
printf("2-subtraction");
printf("3-multiplication");
printf("4-division");
printf("Enter the first number:");
scanf("%d",&a)
printf("Enter the second number:");
scanf("%d",&b)
printf("Enter your choice");
scanf("%d",&ch);
switch (ch)
{
    case 1:c=a+b;
    printf("add=%d",ch);
    break;
    case 2:c=a-b;
    printf("sub=%d",ch);
    break;
    case 3:c=a*b;
    printf("mul=%d",ch);
    break;
    case 4:c=a/b;
    printf("div=%d",ch);
    break;
    default:("wrong choice");
}

getch();

}

