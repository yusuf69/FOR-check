#include<iostream>
using namespace std;
class Arithmetic
{
   float a,b;
     public :
       void getdata()
         {
           cout<<"Enter a "<<endl;
           cin>>a;
           cout<<"Enter b"<<endl;
          cin>>b;
        }
     inline float add()
       {
          return (a+b);
       }
     inline float sub()
      {
         return (a-b);
       }
     inline float mul()
     {
        return (a*b);
      }
      inline double  div()
        {
          return (a/b);
          }
       inline int mod()
          {
           return (int)a%(int)b ;
          }
   
};
int main()
{
   Arithmetic A;
    A.getdata();
   float a=A.add();
   float b=A.sub();
   float c=A.mul();
   double d=A.div();
  int e=A.mod();
 cout<<endl<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;
  return 0;
}
   
