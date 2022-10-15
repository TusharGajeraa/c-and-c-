/*#include<iostream>
using namespace std;



    int sum(int a,int b)
{
    int c=a+b;
    return c;
}

     int main()
     {
         int num1,num2;

         cout<<"Enter first number "<<endl;
         cin>>num1;
         cout<<"Enter second number "<<endl;
         cin>>num2;

         cout<<"Enter sum is "<<sum(num1,num2)<<endl;
         return 0;


     }*/
     #include<iostream>
using namespace std;
int main(){
char Day;
cout<<"Enter the day:";
cin>>Day;

switch (Day)
{
case '1':
cout<<"monday"<<endl;
  break;
  case '2':
cout<<"Tuesday"<<endl;
  break;
  case '3':
cout<<"Wednesday"<<endl;
  break;
  case '4':
cout<<"Thursday"<<endl;
  break;
  case '5':
cout<<"Friday"<<endl;
  break;
  case '6':
cout<<"Saturday"<<endl;
  break;
  case '7':
cout<<"sunday"<<endl;
  break;

default:
cout<<"Enter another day"<<endl;
  break;
}
return 0;
}

