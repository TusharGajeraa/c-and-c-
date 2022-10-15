/*#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    if(n%2==0)
    {
        cout<<"even"<<endl;
    }
    else
    {
        cout<<"odd"<<endl;
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;

int main()
{
    int i;

    for(i=1;i<=10;i++)
    {
        cout<<i<<endl;
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;

int main()
{
    char day;
    cout<<"Enter the days"<<endl;
    cin>>day;

    switch(day)
    {
case '1':
    cout<<"monday"<<endl;
    break;
case '2':
    cout<<"tuesday"<<endl;
    break;
case '3':
    cout<<"wednesday"<<endl;
    break;
case '4':
    cout<<"thuesday"<<endl;
    break;
case '5':
    cout<<"friday"<<endl;
    break;
case '6':
    cout<<"saturday"<<endl;
    break;
case '7':
    cout<<"sunday"<<endl;
    break;

default:
    cout<<"another day"<<endl;
    break;
    }


    return 0;
}*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-i)
            {
                cout<<" ";
            }
            else{
          cout<<" *";
            }
        }
        cout<<endl;
    }
    return 0;
}
