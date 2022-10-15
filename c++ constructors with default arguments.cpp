#include<iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;
public:
    simple(int a,int b=9,int c=13)
    {
    data1=a;
    data2=b;
    data3=c;
    }
    void printdata();
};

void simple :: printdata()
{
    cout<<"Enter the values "<<data1<<"  "<<data2<<" and "<<data3<<endl;
}

int main ()
{
    simple s(4,6);
    s.printdata();
    return 0;
}
