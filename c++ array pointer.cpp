#include<iostream>
using namespace std;


int main()
{
    int marks[]={74,84,94,64};
    int* p=marks;
    cout<<"the values of *p is  "<<*p<<endl;
    cout<<"the values of *(P+1) is  "<<*(p+1)<<endl;
    cout<<"the values of *(p+2) is  "<<*(p+2)<<endl;
    cout<<"the values of *(p+3) is  "<<*(p+3)<<endl;

}

