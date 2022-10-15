#include<iostream>
using namespace std;


template<class T>
void swapp(T &a,T &b)
{
    T temp =a;
    a=b;
    b=temp;
}

template <class t1,class t2>   //template using
float funAverage(t1 a,t2 b)

{
    float avg =(a+b)/2.0;
    return avg;
}

 /*   float funAvarage(int a,float b)
{
    float avg =(a+b)/2.0;
    return avg;
}*/

int main ()
{
    float a;
    a=funAverage(5,2.4);
    printf("The average of these number is % 3f",a);
    cout<<endl;
    int x=5,y=7;
    swapp(x,y);
    cout<<x<<endl<<y;
    return 0;
}
