#include<stdio.h>

int main(){
int num;
int count;
printf("Enter number:");
scanf("%d",&num);

for(count=1;count<=10;count++)
    printf("%d * %d = %d \n",num,count,num*count);
return 0;
}
