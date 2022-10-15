#include<iostream>
using namespace std;

int main()
{
    int a=4;
    int *ptr= &a;

    cout<<"Enter value a is "<<*(ptr)<<endl;

    cout<<endl;

    int*p=new int(40);
    cout<<"Enter the values p is "<<*(p)<<endl;

cout<<endl;
cout<<endl;

    int *arr=new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;

    cout<<"Enter the value arr[0] is "<<arr[0]<<endl;
    cout<<"Enter the value arr[1] is "<<arr[1]<<endl;
    cout<<"Enter the value arr[2] is "<<arr[2]<<endl;



    return 0;
}
