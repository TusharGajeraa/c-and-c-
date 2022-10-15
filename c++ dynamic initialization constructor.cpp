#include<iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnvalue;

public:
    BankDeposit(){}
    BankDeposit(int p,int y,float r);
    BankDeposit(int p,int y,int r);
    void show();
};
 BankDeposit :: BankDeposit(int p,int y,float r)
{
    principal=p;
    years=y;
    interestRate=r;
    returnvalue=principal;
     for(int i=0;i<y;i++)
     {
        Returnvalue=Returnvalue*(1+interestRate);
     }
}
 BankDeposit :: BankDeposit(int p,int y,int R)
{
    principal=p;
    years=y;
    interestRate=float(R)/100;
     returnvalue=principal;
     for(int i=0;i<y;i++)
     {
         Returnvalue=Returnvalue*(1+interestRate);
    }
}
void BankDeposit :: show()
{
    cout<<endl<<"principal amount was"<<principal<<". Return value after "<<years<<" years is "<<returnvalue<<endl;
}
int main ()
{
    BankDeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;

    cout<<"Enter the values of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1=BankDeposit(p,y,r);
    bd1.show();

    cout<<"Enter the values of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2=BankDeposit(p,y,R);
    bd2.show();

    return 0;
}
