#include<stdio.h>



int main(){
    int n,count=0,i;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=5;i++);
    {
        if(n%i==0)

    {
        count++;
    }
    }
    if(count==2)
        printf("prime number");
    else
        printf("not prime number");
    return 0;
}
