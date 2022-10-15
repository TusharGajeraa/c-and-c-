#include<iostream>
using namespace std;


int main()
{
    int marks[]={74,84,94,64};
    int* p=marks;
    cout<<"the values of*marks[0] is  "<<*p<<endl;
    cout<<"the values of*marks[0] is  "<<*(p+1)<<endl;
    cout<<"the values of*marks[0] is  "<<*(p+2)<<endl;
    cout<<"the values of*marks[0] is  "<<*(p+3)<<endl;



}
