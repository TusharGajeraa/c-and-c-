#include<stdio.h>

int main()
/*{
    int num[5];
    printf("Enter element number: ");
    scanf("%d",&num[0]);
     scanf("%d",&num[1]);
      scanf("%d",&num[2]);
       scanf("%d",&num[3]);
        scanf("%d",&num[4]);

        printf("num 1=%d,num 2=%d,num 3=%d,num 4=%d,num 5=%d",num[0],num[1],num[2],num[3],num[4]);
        return 0;




     }*/



{
    float price[3];
    printf("Total price: ");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("Total price=%f \n",price[0]+(0.18*price[0]));
     printf("Total price=%f \n",price[1]+(0.18*price[1]));
      printf("Total price=%f \n",price[2]+(0.18*price[2]));
}
