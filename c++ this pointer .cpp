#include<iostream>
using namespace std;

class A
{
    int a;
public:
    //A & setdata(int a)   return values using
    void setdata(int a)
    {
        this->a=a;
        //return *this;      return values using
    }
    void getdata(void)
    {
        cout<<"Enter number a is "<<a<<endl;
    }
};

int main()
{
    A a;
    //a.setdata(20).getdata();  return values using
    a.setdata(20);
    a.getdata();
    return 0;
}
