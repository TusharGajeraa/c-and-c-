#include<iostream>
using namespace std;

class Student
{
private:
    int a,b,c,d,Rollno[100],Marks[100][100],sum,div;
    float Percentage;

public:

    int get_data()
    {
        cout<<"Enter Student number:";
        cin>>a;
        cout<<"Enter Student subject number:"<<endl;
        cin>>b;
        div=b*100;
        for(c=1;c<=a;c++)
        {
            cout<<"Rollno: ";
            cin>>Rollno[c];
            for(d=1;d<=b;d++)
            {
                cout<<"Subject"<<d<<"Marks:";
                cin>>Marks[c][d];
            }
        }
    }

    print_data()
    {
        cout<<"Rollno";
        for(d=1;d<=b;d++)
        {
            cout<<"\tSubject"<<d;
        }
        cout<<"\tTotal";
        cout<<"\tPercentage"<<endl;

        for(c=1;c<=a;c++)
        {
            cout<<Rollno[c];
            for(d=1;d<=b;d++)
            {
                cout<<"\t"<<Marks[c][d];
            }
            for(d=1;d<=b;d++)
            {
                sum=sum+Marks[c][d];
            }
            cout<<"\t"<<sum;

            Percentage = (sum*100)/div;
            cout<<"\t"<<Percentage;

            sum=0;
            Percentage=0;
            cout<<endl;
        }
    }
};

int main()
{
   Student obj1;
   obj1.get_data();
   obj1.print_data();
}
