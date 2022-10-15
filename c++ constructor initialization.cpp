#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test(int i,int j):a(i),b(j+i+j+i+j+i)
    {
        cout<<"constructor executed "<<endl;
        cout<<"Enter the value a is "<<a<<endl;
        cout<<"Enter the value b is "<<b<<endl;
    }
};

int main()
{
    Test r(4,6);
    return 0;
}
