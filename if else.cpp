#include<iostream>
using namespace std;
int main(){
int a,b,c,d;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"c=";
cin>>c;
cout<<"d=";
cin>>d;

if(a<b)
{
  if(a<c)
  {
    if(a<d)
    {
      cout<<"a is min"<<endl;
    }
    else{
      cout<<"d is max"<<endl;
    }
  }
  else{
    if(c<d)

      {
        cout<<"c is min"<<endl;
      }
      else{
        cout<<"d is max"<<endl;
      }
  }
}
    if(b<c)
    {
      if(b<d)
      {
        cout<<"b is min"<<endl;
      }
      else{
        cout<<"d is max"<<endl;
      }
    }
    else{
      if(c<d)
      {
        cout<<"c is min"<<endl;
      }
      else{
        cout<<"d is max"<<endl;
      }
      }

}


