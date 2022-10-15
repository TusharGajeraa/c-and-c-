#include<iostream>
#include<cstring>
using namespace std;

class TAG{
protected:
    string title;
    float rating;
public:
    TAG(string s,float r)
    {
    title=s;
    rating=r;
    }
    virtual void display()
    {

    }
};
class TAGvideo :public TAG
{
 float videolength;
 public:
     TAGvideo(string s,float r,float vl):TAG(s,r)
     {
         videolength=vl;
     }
     void display()
     {
         cout<<"This is amazing video with title "<<title<<endl;
         cout<<"rating:"<<rating<<"out of 5 star"<<endl;
         cout<<"length of video is:"<<videolength<<"minutes"<<endl;
     }
};
     class TAGtext : public TAG
     {
         int words;
     public:
        TAGtext(string s,float r ,int wc): TAG(s,r)
        {
            words=wc;
        }
        void display()
     {
         cout<<"This is amazing text tutorial with title "<<title<<endl;
         cout<<"rating of this text tutorial:"<<rating<<"out of 5 star"<<endl;
         cout<<"number of word in text tutorial is:"<<words<<"words"<<endl;
     }
     };


int main()
{
    string title;
    float rating,vlen;
    int words;


title="Django tutorial";           //->simple using program
vlen=4.50;
rating=4.80;
TAGvideo djvideo(title,rating,vlen);
djvideo.display();

cout<<endl;
cout<<endl;

title="Django tutorial text";
words=270;
rating=4.80;
TAGtext djtext(title,rating,words);
//djtext.display();


TAG * tuts[2];             //->pointer using program
tuts[0]=&djvideo;
tuts[1]=&djtext;

tuts[0]->display();
tuts[1]->display();

    return 0;
}
