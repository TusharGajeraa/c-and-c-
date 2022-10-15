#include<iostream>
using namespace std;

class shopitem
{
    int Id;
    float Salary;
public:
    void setdata(int a,float b)
    {
        Id=a;
        Salary=b;
    }
    void getdata(void)
    {
        cout<<"code of this item is  "<<Id<<endl;
        cout<<"Salary of this item is "<<Salary<<endl;
    }
};

int main()
{
    int p,i;
    float q;
    int size=5;
    //shop *ptr = &size;
    shopitem *ptr=new shopitem[size];
    shopitem*ptrtemp=ptr;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the Id and price of item"<< i+1<<endl;
        cin>>p>>q;
        //(*ptr).setdata(p,q);
        ptr->setdata(p,q);
        ptr++;
    }
      for(i=0;i<size;i++)
    {
        cout<<"Item number "<< i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }


    return 0;
}
