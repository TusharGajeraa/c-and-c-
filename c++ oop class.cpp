#include<iostream>
using namespace std;

class employee
{
private:
    int a,b,c;
public:
    int d,e;

    void setdata(int a,int b,int c);
    void getdata()
    {
        cout<<"Enter values a is "<<a<<endl;
        cout<<"Enter values b is "<<b<<endl;
        cout<<"Enter values c is "<<c<<endl;
        cout<<"Enter values d is "<<d<<endl;
        cout<<"Enter values e is "<<e<<endl;
    }
};

void employee :: setdata(int a1, int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    employee tushar;
    tushar.d=33;
    tushar.e=43;
    tushar.setdata(2,5,8);
    tushar.getdata();

    return 0;
}
