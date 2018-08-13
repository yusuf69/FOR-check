#include<iostream>
using namespace std;
class XYZ;
class ABC
{
   int a;
     public :
       void getdata()
         {
             cout<<"Enter a "<<endl;
              cin>>a;
         }
     friend float add(ABC t1,XYZ t2);
};
class XYZ
{
   int b;
     public :
       void getdata()
         {
             cout<<"Enter b "<<endl;
              cin>>b;
         }
     friend float add(ABC t1 ,XYZ t2 );
};
float add(ABC t1,XYZ t2)
{
   return (t1.a+t2.b);
}
int main()
{
   ABC D;
   XYZ W;
   D.getdata();
   W.getdata();
  cout<<"Addition:"<<add(D,W)<<endl;
  return 0;
}
