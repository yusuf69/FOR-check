#include<iostream>
using namespace std;
class P
{
  int a;
  void read();
  public :
    void update();
    void dis();
};
void P::read()
{
   cout<<"Enter a number:";
   cin>>a;
}
void P::update()
{
  read();
}
void P::dis()
{
   cout<<"a="<<a<<endl;
}
int main()
{
   P p;
  p.update();
  p.dis();
 return 0;
}
