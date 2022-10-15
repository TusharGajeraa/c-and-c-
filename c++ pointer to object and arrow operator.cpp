#include<iostream>
using namespace std;

class complex
{
    int real,imaginary;
public:
       void getdata()
       {
           cout<<"Enter the real number "<<real<<endl;
           cout<<"Enter the imaginary number "<<imaginary<<endl;
       }
       void setdata(int a,int b)
       {
           real=a;
           imaginary=b;
       }
};

int main()
{
    complex c1;
    c1.setdata(12,14);
    c1.getdata();
    //complex *ptr=&c1;
    complex*ptr=new complex;
    //(*ptr).setdata(12,14);
    //(*ptr).getdata();
    //ptr->setdata(12,15);
    //ptr->getdata();
    return 0;
}
