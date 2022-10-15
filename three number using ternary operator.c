#include<stdio.h>

int main(){
   int a,b,c,max;
   printf("Enter three number:");
   scanf("%d %d %d",&a,&b,&c);
   max=(a>b)?(a>c?a:c):(b>c?b:c);
   printf(" maximum number %d \n:",max);
   return 0;

}

