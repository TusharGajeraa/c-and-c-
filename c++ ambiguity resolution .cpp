#include<iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout<<"Hello good morning " <<endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout<<"Hello good night " <<endl;
    }
};

 class B
 {
        public:
        void say()
        {
        cout<<"Hello Everybody  "<<endl;
        }
 };

 class D : public B
 {
     int a;
    /* public:
     void say()
     {
         cout<<"Hello all my friend best of luck."<<endl;
     }*/
 };

/*class Derived : public base1, public base2
{
    int a;
public:
    void greet()
    {
        base1 :: greet();
        base2 :: greet();
    }
};*/


int main()
{
   /* base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();*/

    B b;
    b.say();

    D d;
    d.say();


    return 0;
}
