#include<iostream>
#include<string.h>
using namespace std;
class complex
{
   float real,image;
  public:
      complex(){ };
      complex(float a,float b)
      {
         real=a;
         image=b;
      }
     complex operator+(complex);
     void display();
};
complex complex::operator+(complex c1)
{
     complex c;
      c.real=real+c1.real;
       c.image=image+c1.image;
     return (c);
}
void complex::display()
{
   cout<<"complex number:"<<real<<"+j"<<image<<endl;
}
int main()
{
   complex p1(4.0,5.5);
  complex p2(2.0,4.5);
  complex p3;
 p3=p1+p2;

   p1.display();
   p2.display();
   p3.display();
   
 
  return 0;
}
