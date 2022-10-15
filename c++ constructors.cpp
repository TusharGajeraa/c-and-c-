#include<iostream>
using namespace std;

class complex
{
    int a, b;
public:
    complex(void);//constructors declaration
    void printnumber()
    {
        cout<<"your number is " <<a<< " + "<<b<<"i"<<endl;
    }
};

complex :: complex(void)
{
a=10;
b=0;
cout<<"Hello world"<< endl;
}

int main()
{
    complex c;
    c.printnumber();

    return 0;

}
