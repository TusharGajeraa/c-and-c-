/*#include<iostream>
using namespace std;

class baseclass
{
public:
    int var_base;
    void display()
    {
        cout<<"Displaying variable base class var_base "<<var_base<<endl;
    }

};

class derivedclass : public baseclass
{
   public:
    int var_derived;
    void display()
    {
         cout<<"Displaying variable base class var_base "<<var_base<<endl;
        cout<<"Displaying variable derived class var_derived "<<var_derived<<endl;
    }

};

int main()
{
    baseclass *base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer = &obj_derived;

    base_class_pointer->var_base=34;
    //base_class_pointer->display();

    return 0;
}*/
#include<iostream>
using namespace std;

class base_class
{
public:
    int var_base;
    void display()
    {
        cout<<"displaying variable base class var_base "<<var_base<<endl;
    }
};
class derived_class :public base_class
{
public:
    int var_derived;
    void display()
    {
        cout<<"displaying variable number var_base "<<var_base<<endl;
        cout<<"displaying variable number var_derived "<<var_derived<<endl;
    }
};

int main()
{
    base_class *base_class_pointer;
    base_class obj_base;
    derived_class obj_derived;
    base_class_pointer = &obj_derived;
    //base_class_pointer->var_base;
    base_class_pointer->var_base=84;
    base_class_pointer->display();

    derived_class *derived_class_pointer;
    derived_class_pointer->var_derived=50;
    derived_class_pointer->var_base=3450;
    derived_class_pointer->display();


    return 0;
}
