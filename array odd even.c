#include<stdio.h>


int main()

{

int n;
printf("Enter a number: ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int count_odd =0, count_even = 0;
for(int i=0;i<n;i++)
{
if(arr[i]%2==1)
count_odd++;
else
count_even++;
}
printf("\nOdd: %d",count_odd);
printf("\nEven: %d",count_even);
return 0;
}

