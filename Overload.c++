#include<iostream>
using namespace std;
class Operator
{
   int a,b,c;
  public:
     void getdata()
      {
         cout<<"Enter a ,b and c"<<endl;
         cin>>a>>b>>c;
      }
    void display()
      {
        cout<<"a="<<a<<endl;
       cout<<"b="<<b<<endl;
       cout<<"c="<<c<<endl;
      }
    void operator-();
};
void Operator::operator-()
{
        a= -a;
        b= -b;
        c= -c;
}
int main()
{
   Operator op;
   op.getdata();
   op.display();
   -op;
   cout<<"-op:"<<endl;
   op.display();
  return 0;
}
