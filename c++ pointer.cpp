#include<iostream>
using namespace std;


int main()
{
    int a=5;
    int * b=&a;
    cout<<"the address of a  "<<&a<<endl;
    cout<<"the address of b  "<<*b<<endl;
    cout<<"the address of b  "<<b<<endl;
    cout<<"the values of address b  "<<* b<<endl;


   // pointer to pointer

   int **c=&b;
   cout<<"enter address of b "<<&b<<endl;
   cout<<"enter address of b "<<c<<endl;
   cout<<"enter values of c  "<<*c<<endl;
   cout<<"enter values of c  "<<**c<<endl;






}

