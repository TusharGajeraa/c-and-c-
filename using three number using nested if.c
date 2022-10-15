#include<stdio.h>

int main(){
   int n1=0,n2=0,n3=0;
   printf("Enter number n1:");
   scanf("%d",&n1);
   printf("Enter number n2:");
   scanf("%d",&n2);
   printf("Enter number n3:");
   scanf("%d",&n3);
   if(n1>n2)
   {
       if(n1>n3)
       {
           printf("\n Enter the number n1: %d is maximum." , n1);
       }
   }
   if(n2>n1)
   {
       if(n2>n3)
       {
           printf("\n Enter the number n2: %d is maximum." , n2);
       }
   }
   if(n3>n2)
   {
       if(n3>n1)
       {
           printf("\n Enter the number n3: %d is maximum." , n3);
       }
   }
   return 0;
}
