#include<iostream>
using namespace std;

// base class
class  employee
{
    public:
    int id;
    float salary;

    employee(int  inpid)
    {
        id=inpid;
        salary=34.0;
    }
    employee(){}

};
//derived class
class programmer : employee
{
public:
    int languagecode;
    programmer(int inpid)
    {
        id=inpid;
        languagecode = 10;
    }
    void getdata()
    {
        cout<<id<<endl;
    }
};

int main()
{
    employee Tushar(1),pratham(2);
    cout<<Tushar.salary<<endl;;
    cout<<pratham.salary<<endl;
    programmer skillf(5);
    cout<<skillf.languagecode<<endl ;
    skillf.getdata();
    return 0;
}
