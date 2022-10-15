#include<iostream>
using namespace std;



    struct employee
{

    int eId;
    char fav;
    float salary;
};




  int main()
  {
      struct employee tushar;

      tushar.eId=1;
      tushar.fav='c';
      tushar.salary=1200000;

      cout<<"the values is "<<tushar.eId<<endl;
      cout<<"the values is "<<tushar.fav<<endl;
      cout<<"the values is "<<tushar.salary<<endl;

      return 0;

  }
