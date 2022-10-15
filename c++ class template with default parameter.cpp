#include<iostream>
using namespace std;

template<class t1=int,class t2=float, class t3=char>
class Tushar
{
public:
    t1 a;
    t2 b;
    t3 c;
    Tushar(t1 x,t2 y,t3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"Enter values of a is "<<a<<endl;
        cout<<"Enter values of b is "<<b<<endl;
        cout<<"Enter values of c is "<<c<<endl;
    }
};

int main()
{
    Tushar<> T(4,4.6,'d');
    T.display();
    cout<<endl;
    Tushar<float,char,int> M(7.8,'g',12);
    M.display();
    return 0;
}
