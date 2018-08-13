#include<iostream>
using namespace std;
class CLASS2;
class CLASS1
{
   int a;
     public :
         void getdata()
           {
             cout<<"Enter a number:"<<endl;
             cin>>a;
            }
          friend void swap(CLASS1 & ,CLASS2 &);
         void dis1()
            {
                cout<<a<<endl;
             }
              
};
class CLASS2
{
    int b;
     public :
         void getdata()
           {
              cout<<"Enter b:"<<endl;
               cin>>b;
           }
        friend void swap(CLASS1 &,CLASS2 &);
         void dis2()
           {
               cout<<b<<endl;
            }
};
void swap(CLASS1 &t1,CLASS2 &t2)
{
     int temp;
      temp=t1.a;
       t1.a=t2.b;
        t2.b=temp;
 }
int main()
{
    CLASS1 t1;
     CLASS2 t2;
      t1.getdata();
       t2.getdata();
   cout<<"Before swapping:"<<endl;
      t1.dis1();
      t2.dis2();
       swap(t1,t2);
     cout<<"After swapping operation:"<<endl;
      t1.dis1();
      t2.dis2();
 return 0;
}
      

