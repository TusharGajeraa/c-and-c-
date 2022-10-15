#include<iostream>
using namespace std;

class Student
{
protected:
    int roll_no;
public:
    void set_number(int a)
    {
    roll_no=a;
    }
    void print_number(void)
    {
        cout<<"My Roll Number is "<<roll_no<<endl;
    }
};

 class Test : virtual public Student
 {
 protected:
    float maths,English;
 public:
    void set_marks(float m1,float m2)
    {
    maths=m1;
    English=m2;
    }
    void print_marks(void)
    {
        cout<<"Enter My maths marks " <<maths<<endl;
        cout<<"Enter My Marks English "<<English<<endl;
    }

 };

 class sports:virtual public Student
 {
 protected:
    float score;
 public:
    void set_score(float sc)
    {
        score=sc;
    }
    void print_score(void)
    {
        cout<<"Enter PT Score is "<<score<<endl;
    }

 };

  class Result : public Test,public sports
{
   private:
       float Total;
   public:
    void Display(void)
    {
        Total=maths+English+score;
        print_number();
        print_marks();
        print_score();

        cout<<"My Total score is "<<Total<<endl;
    }
};
int main()
{
    Result Tushar;
    Tushar.set_number(55);
    Tushar.set_marks(78.87,87.55);
    Tushar.set_score(18);
    Tushar.Display();
    return 0;
}
