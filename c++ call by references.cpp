#include<iostream>
using namespace std;


 int sum(int a,int b){

int c=a+b;

return c;

}
         //call by  references using pointer
     /*void swapPointer(int*a,int*b){   //temp   a     b

        int temp=*a;                     // 4     4     6
        *a=*b;
        *b=temp;                          // 4      6     6

     }  */

     void swapreferencesvar(int &a,int&b){
            int temp=a;
            a=b;
            b=temp;


     }                                   // 4     6     4

   int main()
   {
       int x=4,y=6;
       //cout<<"Enter the sum 4 and 6 is  "<<sum(a,b)<<endl;
       cout<<"Enter the values of a "<<x<<"Enter the values of b "<<y<<endl;
       //swapPointer(&x,&y);
       swapreferencesvar(x,y);
       cout<<"Enter the values of a "<<x<<"Enter the values of b "<<y<<endl;
       return 0;
   }
